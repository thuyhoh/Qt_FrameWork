#include "widget.h"
#include "./ui_widget.h"
#include <QStateMachine>
#include <QEventTransition>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    QStateMachine *machine = new QStateMachine(this);

    QState *s1 = new QState();
    s1->assignProperty(ui->stateLabel, "text", "Current state: 1" );
    s1->assignProperty(ui->ButtonStateMachine, "geometry", QRect(50, 200, 100, 50));

    QState *s2 = new QState();
    s2->assignProperty(ui->stateLabel, "text", "Current state: 2");
    s2->assignProperty(ui->ButtonStateMachine, "geometry", QRect(200, 50, 140, 100));

    QEventTransition *t1 = new QEventTransition(ui->changeStateButton, QEvent::MouseButtonPress);
    t1->setTargetState(s2);
    s1->addTransition(t1);

    QEventTransition *t2 = new QEventTransition(ui->changeStateButton, QEvent::MouseButtonPress);
    t2->setTargetState(s1);
    s2->addTransition(t2);

    machine->addState(s1);
    machine->addState(s2);
    machine->setInitialState(s1);
    machine->start();
}


Widget::~Widget()
{
    delete ui;
}
