#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextEdit>
#include <QAction>
#include <QDockWidget>
#include "inforwidget.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void newFile();

private:
    QTextEdit *dockWidget;
    void createDocks();
    void createActions();
    void createMenu();

    QAction *newAction;
    QAction *closeAction;
    QAction *exitAction;

    QAction *cutAction;
    QAction *copyAction;
    QAction *pasteAction;

    QDockWidget *dock;
};
#endif // MAINWINDOW_H
