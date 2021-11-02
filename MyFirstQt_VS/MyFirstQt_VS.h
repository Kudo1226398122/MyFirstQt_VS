#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyFirstQt_VS.h"

class MyFirstQt_VS : public QMainWindow
{
    Q_OBJECT

public:
    MyFirstQt_VS(QWidget *parent = Q_NULLPTR);
    ~MyFirstQt_VS();

private:
    Ui::MyFirstQt_VSClass ui;

// 在这里声明按钮事件
private slots:
    void button_clicked();// 切换helloworld状态
    void exit_clicked();// 退出
    void img_clicked();// 绘制
};
