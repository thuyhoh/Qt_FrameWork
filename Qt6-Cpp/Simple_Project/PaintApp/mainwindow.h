#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMouseEvent>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    virtual void mousePressEvent(QMouseEvent *event);
    virtual void mouseMoveEvent(QMouseEvent *event);
    virtual void mouseReleaseEvent(QMouseEvent *event);
    virtual void paintEvent(QPaintEvent *event);


private slots:
    void on_actionSave_triggered();

    void on_actionClear_triggered();

    void on_action3px_triggered();

    void on_action5px_triggered();

    void on_action7px_triggered();

    void on_action9px_triggered();

    void on_actionBlack_triggered();

    void on_actionWhite_triggered();

    void on_actionRed_triggered();

    void on_actionGreen_triggered();

    void on_actionYellow_triggered();

private:
    Ui::MainWindow *ui;
    QImage image;
    bool drawing;
    QPoint lastPoint;
    int brushSize;
    QColor brushColor;
};
#endif // MAINWINDOW_H
