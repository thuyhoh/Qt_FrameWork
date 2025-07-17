#include "widget.h"
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QVBoxLayout *vbox = new QVBoxLayout(this);

    fontCombo = new QFontComboBox();
    connect(fontCombo, SIGNAL(currentFontChanged(QFont)), this, SLOT(changeFont()));
    edit = new QTextEdit();

    vbox->addWidget(fontCombo);
    vbox->addWidget(edit);
}

Widget::~Widget() {}

void Widget::changeFont()
{
    QFont font = QFont(fontCombo->itemText(fontCombo->currentIndex()));
    edit->setFont(font);
}
