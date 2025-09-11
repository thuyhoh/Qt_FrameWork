#include "widget.h"
#include "./ui_widget.h"
#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include <QEasingCurve>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QPropertyAnimation *animation1 = new QPropertyAnimation(ui->pushButton1, "geometry");
    animation1->setDuration(3000);
    animation1->setStartValue(ui->pushButton1->geometry());
    animation1->setEndValue(QRect(50,200,100,50));

    QPropertyAnimation *animation2 = new QPropertyAnimation(ui->pushButton2, "geometry");
    animation2->setDuration(3000);
    animation2->setStartValue(ui->pushButton2->geometry());
    animation2->setEndValue(QRect(55,200,100,50));

    QPropertyAnimation *animation3 = new QPropertyAnimation(ui->pushButton3, "geometry");
    animation3->setDuration(3000);
    animation3->setStartValue(ui->pushButton3->geometry());
    animation3->setEndValue(QRect(60,200,100,50));

    QPropertyAnimation *animation4 = new QPropertyAnimation(ui->pushButton4, "geometry");
    animation4->setDuration(3000);
    animation4->setStartValue(ui->pushButton4->geometry());
    animation4->setEndValue(QRect(65,200,100,50));

    QEasingCurve curve;
    curve.setType(QEasingCurve::InBounce);
    curve.setAmplitude(1.0);
    curve.setOvershoot(1.0);
    curve.setPeriod(0.3);
    animation1->setEasingCurve(curve);
    animation2->setEasingCurve(curve);

    QParallelAnimationGroup *group = new QParallelAnimationGroup();
    group->addAnimation(animation1);
    group->addAnimation(animation2);
    group->addAnimation(animation3);
    group->addAnimation(animation4);

    animation1->start();
    animation2->start();
    animation3->start();
    animation4->start();
}

Widget::~Widget()
{
    delete ui;
}
