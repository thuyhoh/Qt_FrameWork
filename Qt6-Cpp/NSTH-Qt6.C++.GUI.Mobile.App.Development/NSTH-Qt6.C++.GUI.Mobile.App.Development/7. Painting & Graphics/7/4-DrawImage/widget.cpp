#include "widget.h"
#include "./ui_widget.h"
#include<QPainter>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::paintEvent(QPaintEvent *event)
{
    QImage image;
    image.load(":/image/qt.png");
    QPainter imagePainter(this);
    imagePainter.drawImage(QPoint(100,150), image);


}

