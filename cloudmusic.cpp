#include "cloudmusic.h"
#include "playlist.h"
#include "ui_cloudmusic.h"
#include <QDebug>
#include <QMediaPlayer>
#include <QMouseEvent>
#include <QPoint>
#include <iostream>

//#include<taglib/aifffile.h>
CloudMusic::CloudMusic(QWidget *parent)
    : QMainWindow{parent}, ui(new Ui::CloudMusic) {
  ui->setupUi(this);

  setWindowFlags(Qt::FramelessWindowHint); //无边框
  // setAttribute(Qt::WA_TranslucentBackground); //背景透明
   //setWindowOpacity(0.7); //设置窗体透明度
  this->setWindowTitle("CloudMusic");

  this->setWindowIcon(QIcon(":/image/Music.png"));
  // ui->TopWidget 控件的 监听鼠标事件
  ui->TopWidget->setMouseTracking(true); //设置鼠标跟踪

  ui->horizontalSlider->setValue(40); //默认音量为40

  ui->tabWidget->hide();
  //    ui->centralwidget->close();
  this->setWindowFlags(Qt::FramelessWindowHint); /* 去除标题栏 */
  //最大化窗口
  connect(ui->max, &QPushButton::clicked, this,
          [this]() { this->showMaximized(); });
  //最小化窗口
  connect(ui->min, &QPushButton::clicked, this,
          [this]() { this->showMinimized(); });
  //退出
  connect(ui->exit, &QPushButton::clicked, this, [this]() { this->close(); });

  //构造音乐列表
  Music = new PlayList(ui->NullWidget);

  //暂停播放
  connect(ui->stop, &QPushButton::clicked, this, &CloudMusic::setStopImage);
  //设置音量
  connect(ui->horizontalSlider, &QSlider::valueChanged, this,
          &CloudMusic::updatePosition);
  //跳转进度
  connect(ui->MediaPlayProgress, &QSlider::sliderMoved, Music,
          &PlayList::JumpProgress);
  //上一首
  connect(ui->prev, &QPushButton::clicked, Music, &PlayList::Prev);
  //下一首
  connect(ui->next, &QPushButton::clicked, Music, &PlayList::Next);
  //获取歌曲时长
  connect(Music, &PlayList::setCurrPlayerT, this,
          [this]() { ui->playerTime->setText(Music->playertime); });

  //鼠标悬停状态
  Hovertip();
  CreatFounMusicWidget();
}

CloudMusic::~CloudMusic() { delete ui; }

void CloudMusic::Hovertip() {
  ui->max->setDisabled(true); //禁用最大化
  ui->exit->setToolTip("关闭");
  ui->min->setToolTip("最小化");
  ui->setting->setToolTip("设置");
  ui->skin->setToolTip("皮肤");
}

//发现音乐
void CloudMusic::CreatFounMusicWidget() {
  // ui->listWidget->setStyleSheet("QListWidget::items(border:0px solid
  // gray;)");
  move = new QListWidgetItem(QIcon("D:/image/word.ico"), QString("视频"),
                             ui->listWidget);
  ui->listWidget->addItem(move);
  friends = new QListWidgetItem(QString("朋友"), ui->listWidget);
  ui->listWidget->addItem(friends);

  Live = new QListWidgetItem(QString("直播"), ui->listWidget);
  ui->listWidget->addItem(Live);

  FM = new QListWidgetItem(QString("私人FM"), ui->listWidget);
  ui->listWidget->addItem(FM);

  LocalMusic = new QListWidgetItem(QString("本地音乐"), ui->listWidget);
  ui->listWidget->addItem(LocalMusic);

  Download = new QListWidgetItem(QString("下载管理"), ui->listWidget);
  ui->listWidget->addItem(Download);

  radio = new QListWidgetItem(QString("电台"), ui->listWidget);
  ui->listWidget->addItem(radio);

  collect = new QListWidgetItem(QString("收藏"), ui->listWidget);
  ui->listWidget->addItem(collect);

  //    右侧TableWidget
  CrearTableWidget();
}

void CloudMusic::CrearTableWidget() {
  ui->tabWidget->setStyleSheet("background-color:transparent;"); //表格透明
  //    ui->tabWidget->tabBar()->setFixedSize(800, 40);
  //    ui->tabWidget->tabBar()->setStyleSheet("height:10; border-radius:50px;
  //    background-color:red");
  wid = new QWidget();
  wid->resize(ui->tabWidget->width(), ui->tabWidget->height());
  QLineEdit *edit = new QLineEdit(tr("Hello World"), wid);
  edit->resize(ui->tabWidget->width(), ui->tabWidget->height());
  ui->tabWidget->setTabPosition(QTabWidget::North); //设置默认标签在上方
  ui->tabWidget->setTabText(0, tr("个性推荐"));
  ui->tabWidget->addTab(wid, tr("歌单"));
  ui->tabWidget->addTab(new QWidget, tr("主播电台"));
  ui->tabWidget->addTab(new QWidget, tr("排行榜"));
  ui->tabWidget->addTab(new QWidget, tr("歌手"));
  ui->tabWidget->addTab(new QWidget, tr("最新音乐"));

  //设置选项卡的形状
  //    ui->tabWidget->setTabShape(QTabWidget::Triangular);
}

QSlider *CloudMusic::getMedidPlayProgress() { return ui->MediaPlayProgress; }

void CloudMusic::setStopImage() {
  Music->Myplay();
  switch (Music->get_flag()) {
  case 0:
    ui->stop->setStyleSheet("border-image: url(:/image/pause.png);");
    break;
  case 1:
    ui->stop->setStyleSheet("border-image: url(:/image/stop.png);");
    break;
  }
}

//滑块信号，设置音量
void CloudMusic::updatePosition(qint64 position) {
  ui->horizontalSlider->setMaximum(120); //设置最大音量
  Music->getplayer()->setVolume(position);
  qDebug() << ui->horizontalSlider->value();
  // ui->horizontalSlider->setValue(position / 1000);
}

//鼠标按下
void CloudMusic::mousePressEvent(QMouseEvent *event) {
  //左键按下
  if (event->button() == Qt::LeftButton) {
    QCursor cursor;
    cursor.setShape(Qt::ClosedHandCursor);
    QApplication::setOverrideCursor(cursor); //使用指针暂时改变形状
    offset = event->globalPos() - pos(); //获取指针位置和窗口位置的差值
  }
}

//鼠标移动事件
void CloudMusic::mouseMoveEvent(QMouseEvent *event) {
  //必须使用buttons
  if (event->buttons() & Qt::LeftButton) {
    temp = event->globalPos() - offset;
    //使用鼠标指针当前的位置减去差值，就得到了窗口应该移动的位置
    QMainWindow::move(temp);
  }
}
//设置鼠标释放事件
void CloudMusic::mouseReleaseEvent(QMouseEvent *event) {
  Q_UNUSED(event);
  QApplication::restoreOverrideCursor(); //恢复鼠标指针形状
}

//静音开关
void CloudMusic::on_volume_clicked() {
  if (ui->horizontalSlider->value() == 0) {
    ui->horizontalSlider->setValue(currval);
    ui->volume->setStyleSheet("#volume{border-image:url(:/image/volume.png)}");
  } else {
    //先获取当前音量，保留恢复使用
    currval = ui->horizontalSlider->value();
    //静音模式
    ui->horizontalSlider->setValue(0);
    ui->volume->setStyleSheet("#volume{border-image:url(:/image/mute.png)}");
  }
}
