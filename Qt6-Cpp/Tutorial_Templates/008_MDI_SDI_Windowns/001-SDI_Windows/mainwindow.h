#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QTextEdit>
#include<QAction>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void newFile();
    void about();

private:
    QTextEdit *textEdit;
    void createActions();
    void createMenus();
    void newWindows();

    int winNum = 0;

    QAction *newAction;
    QAction *closeAction;
    QAction *exitAction;

    QAction *cutAction;
    QAction *pasteAction;
    QAction *copyAction;

    QAction *aboutAction;
};
#endif // MAINWINDOW_H
