QT       += core gui
QT      += multimedia multimediawidgets
# multimedia         多媒体模块
# multimediawidgets  视频模块
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11


#LIBS += "D:\QtCode\CloudMusic\CloudMusic\taglib_out\lib\libtag_c.dll.a"

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    cloudmusic.cpp \
    playlist.cpp

HEADERS += \
    cloudmusic.h \
    playlist.h

FORMS += \
    cloudmusic.ui \
    playlist.ui

RESOURCES += \
    Image.qrc


INCLUDEPATH +=$PWD/taglib/include/taglib/
CONFIG(debug,debug|release){
LIBS += -LD:\QtCode\CloudMusic\CloudMusic\taglib\Debug -ltag
}else{
LIBS += -LD:\QtCode\CloudMusic\CloudMusic\taglib\Release\ -ltag
}
# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
