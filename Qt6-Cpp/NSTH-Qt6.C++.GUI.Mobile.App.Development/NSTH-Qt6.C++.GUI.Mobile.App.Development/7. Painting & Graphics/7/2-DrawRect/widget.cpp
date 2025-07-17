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
    //drawing rect
    QPainter myPainter(this);
    myPainter.setBrush(Qt::BrushStyle::BDiagPattern);
    myPainter.drawRect(QRect(40,120, 200,200));

    //set pen for the ellipse
    QPen ellipsePen;
    ellipsePen.setColor(Qt::GlobalColor::red);
    ellipsePen.setStyle(Qt::DashDotDotLine);

    //draw ellipse
    myPainter.setPen(ellipsePen);
    myPainter.drawEllipse(QPoint(300,200), 80,50);


}

