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
    // 切换helloworld状态
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
    // 退出
    MyFirstQt_VS::~MyFirstQt_VS();
    exit(0);
}

void MyFirstQt_VS::img_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this, "选择文件", QCoreApplication::applicationDirPath(), tr("PNG(*.png);;JPG(*.jpg);;JPEG(*.jpeg);;BMP(*.bmp)"));
    if (fileName.isEmpty()) {
        QMessageBox qmb;
        qmb.warning(this, "警告", "打开" + fileName + "失败！", QMessageBox::Yes);
    }
    else {
        Mat mat = cv::imread(fileName.toLocal8Bit().toStdString());
        cvtColor(mat, mat, COLOR_BGR2GRAY);// 图像格式转换(BGR转灰度图)
        imwrite("D:\\GrayImage.jpg",  mat);
        QSize laSize = ui.opencv_img->size();//  lopencv_img是要显示图片的label的名称
        cvtColor(mat, mat, COLOR_GRAY2RGB);// 将灰度图用RGB格式显示
        QImage disImage = QImage((const unsigned char*)(mat.data), mat.cols, mat.rows, mat.step, QImage::Format_RGB888);
        disImage = disImage.scaled(laSize, Qt::KeepAspectRatio);
        QPixmap pixmap = QPixmap::fromImage(disImage);
        ui.opencv_img->setPixmap(pixmap);
        ui.opencv_img->show();
        //QGraphicsScene* scene = new QGraphicsScene;// 图像显示
        //scene->addPixmap(QPixmap::fromImage(disImage));
        //ui.opencv_img->setScene(scene);
        //ui.opencv_img->show();
    }
}
