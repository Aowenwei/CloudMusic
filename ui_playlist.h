/********************************************************************************
** Form generated from reading UI file 'playlist.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLAYLIST_H
#define UI_PLAYLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PlayList
{
public:
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_2;
    QPushButton *SelectAllDir;
    QLineEdit *search;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QPushButton *playAll;
    QTableWidget *tableWidget;

    void setupUi(QWidget *PlayList)
    {
        if (PlayList->objectName().isEmpty())
            PlayList->setObjectName(QString::fromUtf8("PlayList"));
        PlayList->resize(845, 570);
        PlayList->setMinimumSize(QSize(845, 570));
        PlayList->setMaximumSize(QSize(845, 570));
        layoutWidget = new QWidget(PlayList);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(700, 10, 135, 51));
        verticalLayout_2 = new QVBoxLayout(layoutWidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        SelectAllDir = new QPushButton(layoutWidget);
        SelectAllDir->setObjectName(QString::fromUtf8("SelectAllDir"));

        verticalLayout_2->addWidget(SelectAllDir);

        search = new QLineEdit(layoutWidget);
        search->setObjectName(QString::fromUtf8("search"));
        search->setEchoMode(QLineEdit::Normal);

        verticalLayout_2->addWidget(search);

        layoutWidget1 = new QWidget(PlayList);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 0, 82, 51));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);

        verticalLayout->addWidget(label);

        playAll = new QPushButton(layoutWidget1);
        playAll->setObjectName(QString::fromUtf8("playAll"));

        verticalLayout->addWidget(playAll);

        tableWidget = new QTableWidget(PlayList);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(0, 60, 841, 501));
        tableWidget->setStyleSheet(QString::fromUtf8("QTableWidget::item{width:75px}"));

        retranslateUi(PlayList);

        QMetaObject::connectSlotsByName(PlayList);
    } // setupUi

    void retranslateUi(QWidget *PlayList)
    {
        PlayList->setWindowTitle(QCoreApplication::translate("PlayList", "Form", nullptr));
        SelectAllDir->setText(QCoreApplication::translate("PlayList", "\351\200\211\346\213\251\347\233\256\345\275\225", nullptr));
        search->setInputMask(QString());
        search->setText(QString());
        search->setPlaceholderText(QCoreApplication::translate("PlayList", "\346\220\234\347\264\242\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        label->setText(QCoreApplication::translate("PlayList", "\346\234\254\345\234\260\351\237\263\344\271\220", nullptr));
        playAll->setText(QCoreApplication::translate("PlayList", "\346\222\255\346\224\276\345\205\250\351\203\250", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlayList: public Ui_PlayList {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLAYLIST_H
