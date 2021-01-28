#include "cloudmusic.h"
#include <QApplication>
#include <QFile>
/*MSVC 环境下的代码 */
//#ifdef _MSC_VER
/*解决中文乱码 */
//#pragma execution_character_set("utf-8")

//#elif _GUNC_
/*GCC 环境下的代码 */
//#endif // !_MSV_VER

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  QFile topWidget{":/Style/topWidget.css"};
  QFile centreWidget{":/Style/centreWidget.css"};
  QFile bootonWidget{":/Style/bottomWidget.css"};
  if (topWidget.open(QIODevice::ReadOnly) && centreWidget.open(QIODevice::ReadOnly) &&
      bootonWidget.open(QIODevice::ReadOnly)) {
    QString TopStlyeSheet{topWidget.readAll() + centreWidget.readAll() + bootonWidget.readAll()};
    qApp->setStyleSheet(TopStlyeSheet);
    // a.setStyleSheet(StlyeSheet);
    topWidget.close();
    centreWidget.close();
    bootonWidget.close();
  } else {
    puts("Can't open .css file");
    exit(EXIT_SUCCESS);
  }
  CloudMusic w;
  w.show();
  return a.exec();
}
