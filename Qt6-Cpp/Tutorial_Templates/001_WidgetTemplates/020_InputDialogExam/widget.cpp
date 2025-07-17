#include "widget.h"
#include<QHBoxLayout>
#include<QLabel>
#include<QPushButton>
#include<QInputDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);

    QLabel *label = new QLabel();
    //label->setText("Choose Username");
    label->setText("Choose Languages");
    label->setFont(QFont("Times", 14));

    lineedit = new QLineEdit();
    lineedit->setFont(QFont("Times", 14));

    QPushButton *btn = new QPushButton();
    //btn->setText("Choose Username");
    btn->setText("Choose Languages");
    btn->setFont(QFont("Times", 14));
    //connect(btn, SIGNAL(clicked()), this, SLOT(getMyText()));
    connect(btn, SIGNAL(clicked()), this, SLOT(getMyItem()));


    hbox->addWidget(label);
    hbox->addWidget(lineedit);
    hbox->addWidget(btn);
}

Widget::~Widget() {}

void Widget::getMyText()
{
    QString text = QInputDialog::getText(this, "Get Username", "Enter Your Name : ");
    if(!text.isEmpty()) {
        lineedit->setText(text);
    }
}

void Widget::getMyItem()
{
    QList<QString> languages = {"C++", "Python", "Java", "C#"};

    QString text = QInputDialog::getItem(this, "InputDialog", "List of Languages",languages, 0, false);
    if(!text.isEmpty()) {
        lineedit->setText(text);
    }
}
