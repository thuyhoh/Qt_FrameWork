#include "widget.h"
#include<QPushButton>
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QPushButton *btn1 = new QPushButton();
    btn1->setText("Click One");

    QPushButton *btn2 = new QPushButton();
    btn2->setText("Click Two");

    QPushButton *btn3 = new QPushButton();
    btn3->setText("Click Three");

    QPushButton *btn4 = new QPushButton();
    btn4->setText("Click Four");

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->addWidget(btn1);
    vbox->addWidget(btn2);
    vbox->addWidget(btn3);
    vbox->addWidget(btn4);
}

Widget::~Widget() {}
