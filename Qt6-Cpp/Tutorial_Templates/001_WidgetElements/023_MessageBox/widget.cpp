#include "widget.h"
#include<QPushButton>
#include<QHBoxLayout>
#include<QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);

    QPushButton *btn1 = new QPushButton();
    btn1->setText("Warning");
    connect(btn1, SIGNAL(clicked()), this, SLOT(warnMsg()));

    QPushButton *btn2 = new QPushButton();
    btn2->setText("Information");
    connect(btn2, SIGNAL(clicked()), this, SLOT(setInfo()));

    QPushButton *btn3 = new QPushButton();
    btn3->setText("About");
    connect(btn3, SIGNAL(clicked()), this, SLOT(setAbout()));

    hbox->addWidget(btn1);
    hbox->addWidget(btn2);
    hbox->addWidget(btn3);
}

Widget::~Widget() {}

void Widget::warnMsg()
{
    QMessageBox::warning(this, "Warning", "This is warning");

}

void Widget::setInfo()
{
    QMessageBox::information(this, "information", "This is information");
}

void Widget::setAbout()
{
    QMessageBox::about(this, "about", "This is about");
}

