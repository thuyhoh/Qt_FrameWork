#include "widget.h"
#include "./ui_widget.h"
#include <QPropertyAnimation>
#include <QEasingCurve>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QPropertyAnimation *animation = new QPropertyAnimation(ui->pushButton, "geometry");
    animation->setDuration(10000);
    animation->setStartValue(ui->pushButton->geometry());
    // animation->setEndValue(QRect(200,200,100,50));
    animation->setKeyValueAt(0, QRect(0,0,100,30));
    animation->setKeyValueAt(0.8, QRect(250,250,100,30));
    animation->setKeyValueAt(1, QRect(0,0,100,30));
    animation->start();

}

Widget::~Widget()
{
    delete ui;
}
