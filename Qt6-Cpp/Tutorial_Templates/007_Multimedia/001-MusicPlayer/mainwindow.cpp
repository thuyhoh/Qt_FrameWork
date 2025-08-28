#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QTime>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);

    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(ui->HorizSliderVolume->value());

    connect(player, &QMediaPlayer::playbackStateChanged, this, &MainWindow::stateChanged);
    connect(player, &QMediaPlayer::positionChanged, this, &MainWindow::positionChanged);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::stateChanged(QMediaPlayer::PlaybackState state)
{
    if(state == QMediaPlayer::PlayingState)
    {
        ui->toolButtonPlay->setEnabled(true);
        ui->toolButtonPause->setEnabled(true);;
        ui->toolButtonStop->setEnabled(true);
    }else if (state == QMediaPlayer::PausedState){
        ui->toolButtonPlay->setEnabled(true);
        ui->toolButtonPause->setEnabled(false);;
        ui->toolButtonStop->setEnabled(true);
    }else if(state == QMediaPlayer::StoppedState)
    {
        ui->toolButtonPlay->setEnabled(true);
        ui->toolButtonPause->setEnabled(false);;
        ui->toolButtonStop->setEnabled(false);
    }
}

void MainWindow::positionChanged(qint64 position)
{
    if(ui->HorizSliderVideo->maximum() != player->duration())
        ui->HorizSliderVideo->setMaximum(player->duration());
    ui->HorizSliderVideo->setValue(position);

    int seconds = (position/1000)%60;
    int minutes = (position/60000)%60;
    int hourse = (position/3600000)%24;

    QTime time(hourse, minutes, seconds);

    ui->labelTimer->setText(time.toString());
}



void MainWindow::on_toolButtonPlay_clicked()
{
    player->play();
}


void MainWindow::on_toolButtonPause_clicked()
{
    player->pause();
}


void MainWindow::on_toolButtonStop_clicked()
{
    player->stop();
}


void MainWindow::on_toolButtonVolume_clicked()
{
    if(mute)
    {
        audioOutput->setMuted(true);
        ui->HorizSliderVolume->setValue(0);
        ui->toolButtonVolume->setIcon(QIcon(":/Images/mute.png"));
        mute = false;
    }else
    {
        audioOutput->setMuted(false);
        ui->HorizSliderVolume->setValue(50);
        ui->toolButtonVolume->setIcon(QIcon(":/Images/volume.png"));
        mute = true;
    }
}


void MainWindow::on_HorizSliderVideo_sliderMoved(int position)
{
    player->setPosition(position);
}


void MainWindow::on_HorizSliderVolume_sliderMoved(int position)
{
    audioOutput->setVolume(position);
}


void MainWindow::on_actionOpen_triggered()
{
    QString fileName = QFileDialog::getOpenFileName(this, "Select Audio File");
    QFileInfo fileInfo(fileName);

    player->setSource(QUrl::fromLocalFile(fileName));
    ui->toolButtonPlay->setEnabled(true);
    ui->toolButtonPlay->click();
}

