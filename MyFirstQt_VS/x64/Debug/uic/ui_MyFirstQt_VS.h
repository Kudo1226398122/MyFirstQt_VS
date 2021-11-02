/********************************************************************************
** Form generated from reading UI file 'MyFirstQt_VS.ui'
**
** Created by: Qt User Interface Compiler version 6.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYFIRSTQT_VS_H
#define UI_MYFIRSTQT_VS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFirstQt_VSClass
{
public:
    QWidget *centralWidget;
    QPushButton *show_hello_button;
    QLabel *hello_label;
    QPushButton *exit_button;
    QPushButton *img_button;
    QLabel *opencv_img;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MyFirstQt_VSClass)
    {
        if (MyFirstQt_VSClass->objectName().isEmpty())
            MyFirstQt_VSClass->setObjectName(QString::fromUtf8("MyFirstQt_VSClass"));
        MyFirstQt_VSClass->resize(654, 451);
        centralWidget = new QWidget(MyFirstQt_VSClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        show_hello_button = new QPushButton(centralWidget);
        show_hello_button->setObjectName(QString::fromUtf8("show_hello_button"));
        show_hello_button->setGeometry(QRect(30, 300, 161, 61));
        show_hello_button->setCursor(QCursor(Qt::PointingHandCursor));
        hello_label = new QLabel(centralWidget);
        hello_label->setObjectName(QString::fromUtf8("hello_label"));
        hello_label->setGeometry(QRect(20, 80, 181, 81));
        QFont font;
        font.setPointSize(24);
        hello_label->setFont(font);
        exit_button = new QPushButton(centralWidget);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));
        exit_button->setGeometry(QRect(610, 0, 41, 21));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Agency FB")});
        font1.setPointSize(12);
        exit_button->setFont(font1);
        exit_button->setCursor(QCursor(Qt::PointingHandCursor));
        img_button = new QPushButton(centralWidget);
        img_button->setObjectName(QString::fromUtf8("img_button"));
        img_button->setGeometry(QRect(400, 300, 121, 61));
        opencv_img = new QLabel(centralWidget);
        opencv_img->setObjectName(QString::fromUtf8("opencv_img"));
        opencv_img->setGeometry(QRect(300, 40, 341, 211));
        MyFirstQt_VSClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyFirstQt_VSClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 21));
        MyFirstQt_VSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyFirstQt_VSClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyFirstQt_VSClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyFirstQt_VSClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyFirstQt_VSClass->setStatusBar(statusBar);

        retranslateUi(MyFirstQt_VSClass);
        QObject::connect(exit_button, SIGNAL(clicked()), MyFirstQt_VSClass, SLOT(exit_clicked()));
        QObject::connect(show_hello_button, SIGNAL(clicked()), MyFirstQt_VSClass, SLOT(button_clicked()));
        QObject::connect(img_button, SIGNAL(clicked()), MyFirstQt_VSClass, SLOT(img_clicked()));

        QMetaObject::connectSlotsByName(MyFirstQt_VSClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyFirstQt_VSClass)
    {
        MyFirstQt_VSClass->setWindowTitle(QCoreApplication::translate("MyFirstQt_VSClass", "MyFirstQt_VS", nullptr));
        show_hello_button->setText(QCoreApplication::translate("MyFirstQt_VSClass", "\345\210\207\346\215\242hello world\347\212\266\346\200\201", nullptr));
        hello_label->setText(QCoreApplication::translate("MyFirstQt_VSClass", "Hello World", nullptr));
        exit_button->setText(QCoreApplication::translate("MyFirstQt_VSClass", "\351\200\200\345\207\272", nullptr));
        img_button->setText(QCoreApplication::translate("MyFirstQt_VSClass", "\350\257\273\345\217\226\347\201\260\345\272\246\345\233\276", nullptr));
        opencv_img->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MyFirstQt_VSClass: public Ui_MyFirstQt_VSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFIRSTQT_VS_H
