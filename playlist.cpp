#include "playlist.h"
#include "cloudmusic.h"
#include "ui_playlist.h"
#include <QDateTime>
#include <QDebug>
#include <QFile>
#include <QFileDialog>
#include <QList>
#include <QMediaPlayer>
#include <QMediaPlaylist>
#include <QMessageBox>
#include <QTableWidgetItem>
#include <QTimer> //播放进度
#include <taglib/include/taglib/mp4file.h>
#include <taglib/include/taglib/mp4tag.h>
#include <taglib/include/taglib/mpegfile.h>
#include <taglib/include/taglib/tag.h>
#include <taglib/include/taglib/tfile.h>
#pragma execution_character_set("utf-8")
//#include <mpegproperties.h>

PlayList::PlayList(QWidget *parent)
    : playlist(new QMediaPlaylist(this)), QWidget(parent), ui(new Ui::PlayList),
      flag_start(0) {
  ui->setupUi(this);
  timer = new QTimer(this);
  timer->setInterval(2000);
  timer->start();
  player = new QMediaPlayer(this);
  //设置列等宽
  ui->tableWidget->horizontalHeader()->setSectionResizeMode(
      QHeaderView::Stretch);
  //设置每行的间距
  ui->tableWidget->verticalHeader()->setDefaultSectionSize(30);
  //打开文件
  connect(ui->SelectAllDir, &QPushButton::clicked, this, &PlayList::openFile);
  //播放全部
  connect(ui->playAll, &QPushButton::clicked, this, &PlayList::AllPlay);

  //获取当前歌曲时长
  connect(player, &QMediaPlayer::durationChanged, this,
          &PlayList::CurrPlayerTime);

  //设置按钮样式
  setStyle();
}

PlayList::~PlayList() { delete ui; }

void PlayList::initListWidget() {
  //设置无边框
  // ui->tableWidget->setFrameShape(QFrame::NoFrame);
  //设置触发条件：不可编辑
  ui->tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
  QStringList tablist{tr("音乐标题"), tr("歌手"), tr("专辑"), tr("时长"),
                      tr("大小")};
  ui->tableWidget->clear(); //清空表格
  //获取列数
  int column = tablist.count();
  ui->tableWidget->setColumnCount(column);
  //设置行高
  ui->tableWidget->setLineWidth(10);
  //设置列表名词
  for (int x = 0; x != column; ++x) {
    ui->tableWidget->setHorizontalHeaderItem(
        x, new QTableWidgetItem(tablist.at(x)));
  }
  ui->tableWidget->setAlternatingRowColors(true);
  ui->tableWidget->setSelectionBehavior(
      QAbstractItemView::SelectRows); //设置选择行为时每次选择一行
  QFont font = ui->tableWidget->font();
  font.setPixelSize(15);
  font.setBold(true);
  ui->tableWidget->verticalHeader()->setFont(font);
  // ui->tableWidget->verticalHeader()->setVisible(false);去掉水平和垂直表头
  // ui->tableWidget->setStyleSheet("selection-background-color: aquamarine;");
}

void PlayList::setStyle() {
  QFile style{":/Style/Player.css"};
  if (style.open(QIODevice::ReadOnly)) {
    QString setStyle{style.readAll()};
    this->setStyleSheet(setStyle);
    style.close();
  } else {
    qDebug() << "Player.css can't open!!";
    exit(EXIT_SUCCESS);
  }
  //  ui->playAll->setStyleSheet("border-radius:15px; background-color:red");
}

void PlayList::AllPlay() {
  emit setCurrPlayerT();
  if (!playlist->isEmpty()) {
    player->setVolume(50);
    // player->setPlaylist(playlist); //获取将播放列表要播放的文件
    playlist->setCurrentIndex(0);
    player->play();
    qDebug() << "当前播放列表总歌曲数量： " << playlist->mediaCount();
    //    qDebug() << "歌曲作者：" <<
    //    player->metaData(QMediaMetaData::Author).toString().toUtf8().data();
    return;
  }
  QMessageBox::critical(this, tr("Waring"), tr("播放列表没有歌曲,请先添加歌曲"),
                        QMessageBox::YesAll);
}

//下一首
void PlayList::Next() {
  int index = playlist->currentIndex();
  emit setCurrPlayerT();
  playlist->setCurrentIndex(index + 1);
  //如果到达最后一首
  if (index > getlen()) {
    playlist->setCurrentIndex(1);
  }
  player->play();
}
//上一首
void PlayList::Prev() {
  int index = playlist->currentIndex();
  emit setCurrPlayerT();
  if (index == 1) {
    playlist->setCurrentIndex(index);
  }
  playlist->setCurrentIndex(index - 1);
  player->play();
}

void PlayList::updateDuration(qint64 duration) {
  CloudMusic s;
  s.getMedidPlayProgress()->setRange(0,
                                     duration); //根据播放时长来设置滑块的范围
  s.getMedidPlayProgress()->setEnabled(duration > 0);
  s.getMedidPlayProgress()->setPageStep(duration / 10); //每秒一步的步数
}

//返回歌曲时长
void PlayList::getduration(qint64 playtime) {
  playertime = playtime = player->duration();
}

//拖动进度滑块
void PlayList::JumpProgress(int positon) {
  /*
   * setPosition  设置从那一帧开始播放
   * duration()   音频文件的总帧数
   * positon      当前滑块的位置，默认滑动条的总长度是0-99
   * player->duration() * positon / 100 音频文件的第---帧
   */
  player->setPosition(player->duration() * positon / 100);
}

//播放进度
void PlayList::setSliderValue() {
  CloudMusic music;
  music.getMedidPlayProgress()->setValue(player->position() * 100 /
                                         player->duration());
}

void PlayList::CurrPlayerTime(qint64 playtime) {
  long long h, m, s;
  playtime /= 1000; //获得的时间是以毫秒为单位的
  h = playtime / 3600;
  m = (playtime - h * 3600) / 60;
  s = playtime - h * 3600 - m * 60;
  playertime = QString("%1:%2").arg(m).arg(
      s); //把int型转化为string类型后再设置为label的text
  // ui->label_time->setStyleSheet("color:white"); //设置字体颜色为白色
}

//播放和暂停信号
void PlayList::Myplay() {
  if (player->state() == QMediaPlayer::PlayingState) {
    player->pause(); //暂停
    flag_start = 0;
  } else {
    emit setCurrPlayerT();
    player->play();
    flag_start = 1;
    CloudMusic music;
    //播放进度条
    connect(timer, &QTimer::timeout, &music, &CloudMusic::getMedidPlayProgress);
  }
}

void PlayList::openFile() {
  //先清空数据
  fileList.clear();
  playlist->clear();
  initListWidget();
  const QString FilePath{QFileDialog::getExistingDirectory(
      this, tr("Open File"), tr("E:/网易云缓存/Music/"))};

  QDir dir(FilePath);
  if (dir.count() == 2) {
    QMessageBox::critical(this, tr("Error"), tr("该文件夹没有发现歌曲"),
                          QMessageBox::YesAll);
    return;
  }

  QStringList filters{"*.mp3", "*.MP3"};
  dir.setNameFilters(filters);
  fileList = dir.entryList();
  QFileInfoList infolist = dir.entryInfoList();
  int n = 0;
  while (n != infolist.length()) {
    //添加到播放列表 fromLocalFile(里面必须填绝对路径，否则没有声音)
    playlist->addMedia(QUrl::fromLocalFile(
        QString(infolist.at(n).absoluteFilePath().toStdString().c_str())
            .toUtf8()));
    ++n;
  }
  int x = 0;
  QStringList mpeList{}; //毫秒转分钟
  QDateTime dateTime;
  TagLib::Tag *mytag;
  TagLib::MPEG::File *mpegFile;
  //获取Tag
  while (x != infolist.length()) {
    mpegFile = new TagLib::MPEG::File(
        TagLib::FileName(QFile::encodeName(infolist.at(x).absoluteFilePath())));
    mytag = mpegFile->tag();
    TagLib::AudioProperties *aproperties = mpegFile->audioProperties();
    QString tite = mytag->title().toCString(true);
    QString artist = mytag->artist().toCString(true);
    QString albums = mytag->album().toCString(true);
    QString times = dateTime.fromSecsSinceEpoch(aproperties->lengthInSeconds())
                        .toString("mm:ss");
    QString Size = QString(" %1").number(
                       (double)(infolist.at(x).size()) / 1024 / 1024, 'f', 2) +
                   " M";
    mpeList << tite << artist << albums << times << Size;
    ui->tableWidget->insertRow(x);
    for (int y = 0; y != 5; y++) {
      ui->tableWidget->setItem(x, y, new QTableWidgetItem(mpeList.at(y)));
    }
    mpeList.clear();
    ++x;
  }
  playlist->setPlaybackMode(QMediaPlaylist::Loop); //设置循环模式
  player->setPlaylist(playlist); //获取将播放列表要播放的文件
}

/*
 * 查询播放列表的歌曲
 * 判断输入是否为空？全部显示（结束）：进一步判断
 * 获取符合条件的行号
 * 隐藏所有行
 * 判断行号是否为空？（是，结束操作）：否，显示相关行（结束）
 */
void PlayList::on_search_editingFinished() {
  QString text = ui->search->text();
  int curRow = ui->tableWidget->rowCount();
  if ("" == text) {
    for (int i = 0; i != curRow; i++) {
      ui->tableWidget->setRowHidden(i, false);
    }
  } else {
    //列出所有的条件的cell索引
    QList<QTableWidgetItem *> item =
        ui->tableWidget->findItems(text, Qt::MatchContains);
    for (int i = 0; i != curRow; i++) {
      //隐藏所有行
      ui->tableWidget->setRowHidden(i, true);
    }
    if (!item.isEmpty()) {
      //打印查询到的结果
      for (int i = 0; i != item.count(); i++) {
        ui->tableWidget->setRowHidden(item.at(i)->row(), false);
      }
    }
  }
}

void PlayList::on_tableWidget_cellDoubleClicked(int row, int column) {
  playlist->setCurrentIndex(row);
  player->play();
}
