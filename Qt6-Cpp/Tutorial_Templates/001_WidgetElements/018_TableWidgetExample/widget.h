#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QTableWidget>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    QTableWidget *table;
};
#endif // WIDGET_H
