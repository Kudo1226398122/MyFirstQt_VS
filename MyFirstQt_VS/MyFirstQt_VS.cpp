#pragma execution_character_set("utf-8")
#include "MyFirstQt_VS.h"
#include <qmessagebox.h>
#include <qfiledialog.h>
#include <opencv2/opencv.hpp>

bool hello_flag = false;
using namespace cv;
using namespace std;

MyFirstQt_VS::MyFirstQt_VS(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    ui.hello_label->setVisible(hello_flag);
    connect(ui.show_hello_button, SIGNAL(clicked()), this, SLOT(button_clicked));
    connect(ui.exit_button, SIGNAL(clicked()), this, SLOT(exit_clicked));
    connect(ui.img_button, SIGNAL(clicked()), this, SLOT(img_clicked}));
}

MyFirstQt_VS::~MyFirstQt_VS()
{
    
}

void MyFirstQt_VS::button_clicked()
{
    // �л�helloworld״̬
    if (hello_flag) {
        hello_flag = false;
        ui.hello_label->setVisible(hello_flag);
    }
    else {
        hello_flag = true;
        ui.hello_label->setVisible(hello_flag);
    }
}

void MyFirstQt_VS::exit_clicked()
{
    // �˳�
    MyFirstQt_VS::~MyFirstQt_VS();
    exit(0);
}

void MyFirstQt_VS::img_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "ѡ���ļ�", QCoreApplication::applicationDirPath(), tr("PNG(*.png);;JPG(*.jpg);;JPEG(*.jpeg);;BMP(*.bmp)"));
    if (fileName.isEmpty()) {
        QMessageBox qmb;
        qmb.warning(this, "����", "��" + fileName + "ʧ�ܣ�", QMessageBox::Yes);
    }
    else {
        Mat mat = cv::imread(fileName.toLocal8Bit().toStdString());
        cvtColor(mat, mat, COLOR_BGR2GRAY);// ͼ���ʽת��(BGRת�Ҷ�ͼ)
        imwrite("D:\\GrayImage.jpg",  mat);
        QSize laSize = ui.opencv_img->size();//  lopencv_img��Ҫ��ʾͼƬ��label������
        cvtColor(mat, mat, COLOR_GRAY2RGB);// ���Ҷ�ͼ��RGB��ʽ��ʾ
        QImage disImage = QImage((const unsigned char*)(mat.data), mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        disImage = disImage.scaled(laSize, Qt::KeepAspectRatio);
        QPixmap pixmap = QPixmap::fromImage(disImage);
        ui.opencv_img->setPixmap(pixmap);
        ui.opencv_img->show();
        //QGraphicsScene* scene = new QGraphicsScene;// ͼ����ʾ
        //scene->addPixmap(QPixmap::fromImage(disImage));
        //ui.opencv_img->setScene(scene);
        //ui.opencv_img->show();
    }
}
