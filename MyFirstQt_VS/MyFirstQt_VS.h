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

// ������������ť�¼�
private slots:
    void button_clicked();// �л�helloworld״̬
    void exit_clicked();// �˳�
    void img_clicked();// ����
};
