#ifndef WIDGET_H
#define WIDGET_H
#include<QLCDNumber>
#include <QWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void randGenerator();

private:
    QLCDNumber *lcd;
};
#endif // WIDGET_H
