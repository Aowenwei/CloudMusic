#if _MSC_VER >= 1600
#pragma execution_character_set("utf-8")
#endif
#ifndef CLOUDMUSIC_H
#define CLOUDMUSIC_H
#include "playlist.h"
#include <QMainWindow>
class QSlider;
class QMediaPlayer;
class PlayList;
QT_BEGIN_NAMESPACE
namespace Ui {
class CloudMusic;
}
QT_END_NAMESPACE
class QTableWidget;
class QListWidgetItem;
class CloudMusic : public QMainWindow {
  Q_OBJECT
public slots:
  void updatePosition(qint64 position);

public:
  CloudMusic(QWidget *parent = nullptr);
  ~CloudMusic();
  //按钮的悬停提示
  void Hovertip();
  //创建侧边栏
  void CreatFounMusicWidget();
  void CrearTableWidget();
  CloudMusic *getUi() { return this; }
  QSlider *getMedidPlayProgress();
private slots:
  void setStopImage();
  void on_volume_clicked();
  //void getCurrPlayerTime();
  protected:
  virtual void mousePressEvent(QMouseEvent *);
  virtual void mouseMoveEvent(QMouseEvent *);
  virtual void mouseReleaseEvent(QMouseEvent *);

private:
  int currval;
  QPoint temp;
  QCursor cursor; //创建光标对象
  QPoint offset;  //储存鼠标指针位置为窗口位置的差值
  PlayList *Music;
  QWidget *wid;
  //侧边栏按钮,发现音乐一栏
  QListWidgetItem *move;
  QListWidgetItem *friends;
  QListWidgetItem *Live;
  QListWidgetItem *FM;
  //侧边栏按钮,我的音乐一栏
  QListWidgetItem *LocalMusic;
  QListWidgetItem *Download;
  QListWidgetItem *radio;
  QListWidgetItem *collect;

public:
  Ui::CloudMusic *ui;
};
#endif // CLOUDMUSIC_H
