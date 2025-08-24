#include "widget.h"
#include<QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);

    slider = new QSlider();
    slider->setOrientation(Qt::Horizontal);
    slider->setTickPosition(QSlider::TicksBelow);
    slider->setTickInterval(5);
    slider->setMinimum(1);
    slider->setMaximum(100);
    connect(slider, SIGNAL(valueChanged(int)), this, SLOT(changeSlider()));

    labelResult = new QLabel("Hello");
    labelResult->setFont(QFont("Times", 15));


    hbox->addWidget(slider);
    hbox->addWidget(labelResult);
}

Widget::~Widget() {}

void Widget::changeSlider()
{
    int value = slider->value();
    labelResult->setText(QString::number(value));
}
