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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyFirstQt_VSClass
{
public:
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QPushButton *show_hello_button;
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
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setEnabled(true);
        textEdit->setGeometry(QRect(200, 130, 271, 71));
        show_hello_button = new QPushButton(centralWidget);
        show_hello_button->setObjectName(QString::fromUtf8("show_hello_button"));
        show_hello_button->setGeometry(QRect(250, 300, 151, 61));
        MyFirstQt_VSClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MyFirstQt_VSClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 654, 22));
        MyFirstQt_VSClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MyFirstQt_VSClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MyFirstQt_VSClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MyFirstQt_VSClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MyFirstQt_VSClass->setStatusBar(statusBar);

        retranslateUi(MyFirstQt_VSClass);
        QObject::connect(show_hello_button, SIGNAL(clicked()), MyFirstQt_VSClass, SLOT(button_click()));

        QMetaObject::connectSlotsByName(MyFirstQt_VSClass);
    } // setupUi

    void retranslateUi(QMainWindow *MyFirstQt_VSClass)
    {
        MyFirstQt_VSClass->setWindowTitle(QCoreApplication::translate("MyFirstQt_VSClass", "MyFirstQt_VS", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MyFirstQt_VSClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:36pt;\">hello world</span></p></body></html>", nullptr));
        show_hello_button->setText(QCoreApplication::translate("MyFirstQt_VSClass", "\346\230\276\347\244\272hello world\347\232\204\346\214\211\351\222\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyFirstQt_VSClass: public Ui_MyFirstQt_VSClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYFIRSTQT_VS_H
