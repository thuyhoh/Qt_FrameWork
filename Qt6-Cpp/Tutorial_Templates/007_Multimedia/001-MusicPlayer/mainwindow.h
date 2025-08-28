#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
#include <QAudioOutput>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void stateChanged(QMediaPlayer::PlaybackState state);
    void positionChanged(qint64 position);


private slots:
    void on_toolButtonPlay_clicked();

    void on_toolButtonPause_clicked();

    void on_toolButtonStop_clicked();

    void on_toolButtonVolume_clicked();

    void on_HorizSliderVideo_sliderMoved(int position);

    void on_HorizSliderVolume_sliderMoved(int position);

    void on_actionOpen_triggered();

private:
    Ui::MainWindow *ui;
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    bool mute;
};
#endif // MAINWINDOW_H
