#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#ifndef PLAYLIST_H
#define PLAYLIST_H
//#include "cloudmusic.h"
#include <QFileInfo>
#include <QWidget>
class QTimer;
class QMediaPlayer;
class QMediaPlaylist;
namespace Ui {
class PlayList;
}

class PlayList : public QWidget {
  Q_OBJECT

public:
  QString playertime{};
  explicit PlayList(QWidget *parent = nullptr);
  ~PlayList();
  void initListWidget();
  void setStyle();
  QMediaPlayer *getplayer() { return player; }
  int get_flag() { return flag_start; }
  int getlen() const { return fileList.length(); }
public slots:
  void openFile();
  void Myplay();
  void AllPlay();
  void Next(); //下一首
  void Prev(); //上一首
  //更新歌曲时间
  void updateDuration(qint64 duration);
  void getduration(qint64 playtime);
  void JumpProgress(int positon);
  void setSliderValue();
  //获取当前播放歌曲的时长
  void CurrPlayerTime(qint64 playtime);
signals:
  void setCurrPlayerT();

  private slots:
    void on_search_editingFinished();

    void on_tableWidget_cellDoubleClicked(int row, int column);

private:
  int count{0};
  int flag_start;
  QTimer *timer; //定时器
  QMediaPlayer *player;
  QMediaPlaylist *playlist; //将stringlist_song中的歌曲添加到songlist
  QStringList fileList;     //保存读取的歌曲
  Ui::PlayList *ui;
};

#endif // PLAYLIST_H
