#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QColorDialog>
#include<QTextEdit>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
private slots:
    void changeColor();

private:
    QColorDialog *colorDialog;
    QTextEdit *textEdit;
};
#endif // WIDGET_H
