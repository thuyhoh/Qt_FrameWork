#include "widget.h"
#include "./ui_widget.h"
#include<QPainter>
#include<QTextDocument>

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
    //drawing text
    QPainter myPainter(this);
    myPainter.setFont(QFont("Times", 20));
    myPainter.drawText(QPoint(100,100), "Qt6 Course");

    //adding html contents
    QTextDocument textDocument;

    textDocument.setHtml("<b>Welcome to Qt6 Course</b><i>Udemy Course</i><font size='15' color='red'>Enjoy the course</font>");
    textDocument.drawContents(&myPainter);

    //draw line
    myPainter.drawLine(QPoint(50,50), QPoint(200,200));



}

