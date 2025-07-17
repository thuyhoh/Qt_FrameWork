#include "widget.h"
#include<QVBoxLayout>
#include<QPushButton>
#include<QFontDialog>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout(this);

    textEdit = new QTextEdit();
    QPushButton *btn = new QPushButton();
    btn->setText("Change Font");
    connect(btn, SIGNAL(clicked()), this, SLOT(changeFont()));

    vbox->addWidget(textEdit);
    vbox->addWidget(btn);
}

Widget::~Widget()
{
}

void Widget::changeFont()
{
    bool ok;

    QFont font = QFontDialog::getFont(&ok, this);

    if(ok) {
        textEdit->setFont(font);
    }

}

