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
    animation->setDuration(3000);
    animation->setStartValue(ui->pushButton->geometry());
    animation->setEndValue(QRect(200,200,100,50));

    QEasingCurve curve;
    curve.setType(QEasingCurve::OutBounce);
    animation->setEasingCurve(curve);
    animation->setLoopCount(3);

    animation->start();

}

Widget::~Widget()
{
    delete ui;
}
