/********************************************************************************
** Form generated from reading UI file 'cloudmusic.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLOUDMUSIC_H
#define UI_CLOUDMUSIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CloudMusic
{
public:
    QWidget *centralwidget;
    QWidget *TopWidget;
    QHBoxLayout *horizontalLayout_2;
    QLabel *MusicLogo;
    QSpacerItem *horizontalSpacer_10;
    QLineEdit *search;
    QSpacerItem *horizontalSpacer_11;
    QSpacerItem *horizontalSpacer;
    QPushButton *setting;
    QSpacerItem *horizontalSpacer_12;
    QPushButton *skin;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *min;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *max;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *exit;
    QSpacerItem *horizontalSpacer_18;
    QWidget *bottomWidget;
    QLabel *songe;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *volume;
    QSlider *horizontalSlider;
    QPushButton *list;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *circulation;
    QSpacerItem *verticalSpacer_3;
    QPushButton *prev;
    QSpacerItem *verticalSpacer;
    QPushButton *stop;
    QSpacerItem *verticalSpacer_2;
    QPushButton *next;
    QSpacerItem *verticalSpacer_4;
    QPushButton *lyrics;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *StartTime;
    QSlider *MediaPlayProgress;
    QLabel *playerTime;
    QListWidget *listWidget;
    QWidget *NullWidget;
    QTabWidget *tabWidget;
    QWidget *widget;

    void setupUi(QMainWindow *CloudMusic)
    {
        if (CloudMusic->objectName().isEmpty())
            CloudMusic->setObjectName(QString::fromUtf8("CloudMusic"));
        CloudMusic->resize(1024, 720);
        CloudMusic->setMinimumSize(QSize(1024, 720));
        CloudMusic->setMaximumSize(QSize(1024, 720));
        centralwidget = new QWidget(CloudMusic);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        TopWidget = new QWidget(centralwidget);
        TopWidget->setObjectName(QString::fromUtf8("TopWidget"));
        TopWidget->setGeometry(QRect(0, 0, 1030, 75));
        TopWidget->setMinimumSize(QSize(1030, 75));
        TopWidget->setMaximumSize(QSize(1030, 75));
        TopWidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(TopWidget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        MusicLogo = new QLabel(TopWidget);
        MusicLogo->setObjectName(QString::fromUtf8("MusicLogo"));
        MusicLogo->setMinimumSize(QSize(170, 65));
        MusicLogo->setMaximumSize(QSize(170, 65));
        MusicLogo->setLayoutDirection(Qt::LeftToRight);

        horizontalLayout_2->addWidget(MusicLogo);

        horizontalSpacer_10 = new QSpacerItem(150, 17, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_10);

        search = new QLineEdit(TopWidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setLayoutDirection(Qt::LeftToRight);
        search->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(search);

        horizontalSpacer_11 = new QSpacerItem(89, 69, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_11);

        horizontalSpacer = new QSpacerItem(150, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        setting = new QPushButton(TopWidget);
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setMinimumSize(QSize(35, 20));
        setting->setMaximumSize(QSize(35, 20));

        horizontalLayout_2->addWidget(setting);

        horizontalSpacer_12 = new QSpacerItem(10, 69, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_12);

        skin = new QPushButton(TopWidget);
        skin->setObjectName(QString::fromUtf8("skin"));
        skin->setMinimumSize(QSize(0, 20));
        skin->setMaximumSize(QSize(35, 20));

        horizontalLayout_2->addWidget(skin);

        horizontalSpacer_13 = new QSpacerItem(60, 69, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_13);

        min = new QPushButton(TopWidget);
        min->setObjectName(QString::fromUtf8("min"));
        min->setMinimumSize(QSize(30, 18));
        min->setMaximumSize(QSize(35, 20));

        horizontalLayout_2->addWidget(min);

        horizontalSpacer_16 = new QSpacerItem(10, 69, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_16);

        max = new QPushButton(TopWidget);
        max->setObjectName(QString::fromUtf8("max"));
        max->setMaximumSize(QSize(35, 20));

        horizontalLayout_2->addWidget(max);

        horizontalSpacer_17 = new QSpacerItem(9, 69, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_17);

        exit = new QPushButton(TopWidget);
        exit->setObjectName(QString::fromUtf8("exit"));
        exit->setMinimumSize(QSize(30, 18));
        exit->setMaximumSize(QSize(35, 20));
        exit->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(exit);

        horizontalSpacer_18 = new QSpacerItem(5, 69, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_18);

        bottomWidget = new QWidget(centralwidget);
        bottomWidget->setObjectName(QString::fromUtf8("bottomWidget"));
        bottomWidget->setGeometry(QRect(0, 635, 1030, 70));
        bottomWidget->setMinimumSize(QSize(1030, 70));
        bottomWidget->setMaximumSize(QSize(1030, 70));
        bottomWidget->setStyleSheet(QString::fromUtf8("QWidget#bottonWidget{\n"
"background-color:gray\n"
"};"));
        songe = new QLabel(bottomWidget);
        songe->setObjectName(QString::fromUtf8("songe"));
        songe->setGeometry(QRect(10, 10, 50, 60));
        songe->setMinimumSize(QSize(50, 60));
        songe->setMaximumSize(QSize(50, 60));
        layoutWidget = new QWidget(bottomWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(820, 30, 191, 31));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        volume = new QPushButton(layoutWidget);
        volume->setObjectName(QString::fromUtf8("volume"));
        volume->setMaximumSize(QSize(30, 22));

        horizontalLayout_3->addWidget(volume);

        horizontalSlider = new QSlider(layoutWidget);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setMinimumSize(QSize(113, 29));
        horizontalSlider->setMaximumSize(QSize(113, 29));
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_3->addWidget(horizontalSlider);

        list = new QPushButton(layoutWidget);
        list->setObjectName(QString::fromUtf8("list"));
        list->setMaximumSize(QSize(30, 22));

        horizontalLayout_3->addWidget(list);

        layoutWidget1 = new QWidget(bottomWidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(390, 10, 268, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        circulation = new QPushButton(layoutWidget1);
        circulation->setObjectName(QString::fromUtf8("circulation"));
        circulation->setMinimumSize(QSize(30, 18));
        circulation->setMaximumSize(QSize(35, 20));

        horizontalLayout_4->addWidget(circulation);

        verticalSpacer_3 = new QSpacerItem(15, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_3);

        prev = new QPushButton(layoutWidget1);
        prev->setObjectName(QString::fromUtf8("prev"));
        prev->setMinimumSize(QSize(30, 18));
        prev->setMaximumSize(QSize(35, 20));

        horizontalLayout_4->addWidget(prev);

        verticalSpacer = new QSpacerItem(14, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer);

        stop = new QPushButton(layoutWidget1);
        stop->setObjectName(QString::fromUtf8("stop"));
        stop->setMinimumSize(QSize(30, 18));
        stop->setMaximumSize(QSize(35, 20));

        horizontalLayout_4->addWidget(stop);

        verticalSpacer_2 = new QSpacerItem(15, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_2);

        next = new QPushButton(layoutWidget1);
        next->setObjectName(QString::fromUtf8("next"));
        next->setMinimumSize(QSize(30, 18));
        next->setMaximumSize(QSize(35, 20));

        horizontalLayout_4->addWidget(next);

        verticalSpacer_4 = new QSpacerItem(14, 16, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_4->addItem(verticalSpacer_4);

        lyrics = new QPushButton(layoutWidget1);
        lyrics->setObjectName(QString::fromUtf8("lyrics"));
        lyrics->setMinimumSize(QSize(30, 18));
        lyrics->setMaximumSize(QSize(35, 20));

        horizontalLayout_4->addWidget(lyrics);

        layoutWidget2 = new QWidget(bottomWidget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(260, 40, 521, 24));
        horizontalLayout_6 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        StartTime = new QLabel(layoutWidget2);
        StartTime->setObjectName(QString::fromUtf8("StartTime"));
        StartTime->setMinimumSize(QSize(55, 22));
        StartTime->setMaximumSize(QSize(55, 22));

        horizontalLayout_6->addWidget(StartTime);

        MediaPlayProgress = new QSlider(layoutWidget2);
        MediaPlayProgress->setObjectName(QString::fromUtf8("MediaPlayProgress"));
        MediaPlayProgress->setOrientation(Qt::Horizontal);

        horizontalLayout_6->addWidget(MediaPlayProgress);

        playerTime = new QLabel(layoutWidget2);
        playerTime->setObjectName(QString::fromUtf8("playerTime"));
        playerTime->setMinimumSize(QSize(55, 22));
        playerTime->setMaximumSize(QSize(55, 22));

        horizontalLayout_6->addWidget(playerTime);

        listWidget = new QListWidget(centralwidget);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        font.setStyleStrategy(QFont::PreferAntialias);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setFont(font);
        __qlistwidgetitem->setForeground(brush);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(0, 80, 175, 560));
        listWidget->setMinimumSize(QSize(175, 560));
        listWidget->setMaximumSize(QSize(175, 560));
        NullWidget = new QWidget(centralwidget);
        NullWidget->setObjectName(QString::fromUtf8("NullWidget"));
        NullWidget->setGeometry(QRect(180, 80, 845, 560));
        NullWidget->setMinimumSize(QSize(845, 560));
        NullWidget->setMaximumSize(QSize(845, 560));
        NullWidget->setStyleSheet(QString::fromUtf8(""));
        tabWidget = new QTabWidget(NullWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 845, 560));
        tabWidget->setMinimumSize(QSize(845, 560));
        tabWidget->setMaximumSize(QSize(845, 560));
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        tabWidget->addTab(widget, QString());
        CloudMusic->setCentralWidget(centralwidget);
        NullWidget->raise();
        TopWidget->raise();
        bottomWidget->raise();
        listWidget->raise();

        retranslateUi(CloudMusic);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CloudMusic);
    } // setupUi

    void retranslateUi(QMainWindow *CloudMusic)
    {
        CloudMusic->setWindowTitle(QCoreApplication::translate("CloudMusic", "CloudMusic", nullptr));
        MusicLogo->setText(QString());
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("CloudMusic", "\346\220\234\347\264\242", nullptr));
        setting->setText(QString());
        skin->setText(QString());
        min->setText(QString());
        max->setText(QString());
        exit->setText(QString());
        songe->setText(QCoreApplication::translate("CloudMusic", "image", nullptr));
        volume->setText(QString());
        list->setText(QString());
        circulation->setText(QString());
        prev->setText(QString());
        stop->setText(QString());
        next->setText(QString());
        lyrics->setText(QString());
        StartTime->setText(QCoreApplication::translate("CloudMusic", "0 : 0", nullptr));
        playerTime->setText(QString());

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("CloudMusic", "\345\217\221\347\216\260\351\237\263\344\271\220", nullptr));
        listWidget->setSortingEnabled(__sortingEnabled);

        tabWidget->setTabText(tabWidget->indexOf(widget), QCoreApplication::translate("CloudMusic", "Tab 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CloudMusic: public Ui_CloudMusic {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLOUDMUSIC_H
