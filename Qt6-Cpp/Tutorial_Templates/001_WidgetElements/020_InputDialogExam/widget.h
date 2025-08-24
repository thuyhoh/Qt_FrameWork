#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QInputDialog>
#include<QLineEdit>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void getMyText();
    void getMyItem();

private:
    QLineEdit *lineedit;
};
#endif // WIDGET_H
