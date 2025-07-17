#include "widget.h"
#include<QPushButton>
#include<QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    // resize(0,200);
    QPushButton *btn1 = new QPushButton();
    btn1->setText("Click One");
    //btn1->move(100,100);

    QPushButton *btn2 = new QPushButton();
    btn2->setText("Click Two");
    // btn2->move(100,200);

    QPushButton *btn3 = new QPushButton();
    btn3->setText("Click Three");
    // btn3->move(100,300);

    QPushButton *btn4 = new QPushButton();
    btn4->setText("Click Four");
    // btn4->move(100,400);

    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(btn1);
    hbox->addWidget(btn2);
    hbox->addWidget(btn3);
    hbox->addWidget(btn4);
    hbox->addSpacing(0);

}

Widget::~Widget() {}
