#include "widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout();

    check1 = new QCheckBox();
    check1->setText("Python");
    check1->setFont(QFont("Times", 15));
    check1->setIcon(QIcon(":/images/py.png"));
    check1->setIconSize(QSize(40,40));
    connect(check1, SIGNAL(stateChanged(int)), this, SLOT(changeCheck()));

    check2 = new QCheckBox();
    check2->setText("C++");
    check2->setFont(QFont("Times", 15));
    check2->setIcon(QIcon(":/images/cpp.png"));
    check2->setIconSize(QSize(40,40));
    connect(check2, SIGNAL(stateChanged(int)), this, SLOT(changeCheck()));

    check3 = new QCheckBox();
    check3->setText("Java");
    check3->setFont(QFont("Times", 15));
    check3->setIcon(QIcon(":/images/java.png"));
    check3->setIconSize(QSize(40,40));
    connect(check3, SIGNAL(stateChanged(int)), this, SLOT(changeCheck()));

    label = new QLabel("Hello");
    label->setFont(QFont("Times", 15));

    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->addWidget(label);

    hbox->addWidget(check1);
    hbox->addWidget(check2);
    hbox->addWidget(check3);
    vbox->addLayout(hbox);
}

Widget::~Widget() {}

void Widget::changeCheck()
{
    QString value = "";

    if(check1->isChecked()) {
        value = check1->text();
    }

    if(check2->isChecked()) {
        value = check2->text();
    }

    if(check3->isChecked()) {
        value = check3->text();
    }

    label->setText("You have selected : " + value);

}
