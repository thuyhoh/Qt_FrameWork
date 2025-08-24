#include "widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);

    QHBoxLayout *hbox = new QHBoxLayout();

    QLabel *label = new QLabel();
    label->setText("Select Account Type: ");
    label->setFont(QFont("Times", 14));

    combo = new QComboBox();
    combo->setFont(QFont("Times", 14));
    combo->addItem("Current Account");
    combo->addItem("Deposite Account");
    combo->addItem("Saving Account");
    connect(combo, SIGNAL(currentTextChanged(QString)), this, SLOT(comboChanged()));

    // labelResult = new QLabel("Hello");
    // labelResult->setFont(QFont("Times", 14));

    QVBoxLayout *vbox = new QVBoxLayout(this);
    // vbox->addWidget(labelResult);


    hbox->addWidget(label);
    hbox->addWidget(combo);
    vbox->addLayout(hbox);

}

Widget::~Widget() {}

void Widget::comboChanged()
{
    QString item = combo->currentText();
    labelResult->setText("Your Account Type Is : " + item);

}

