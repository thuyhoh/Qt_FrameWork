#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void changeText();

private:
    QLabel *label;
};

#endif // WIDGET_H
