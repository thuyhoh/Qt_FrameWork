#include "mainwindow.h"
#include <QtSerialPort/QSerialPortInfo>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    resize(500,500);
    for(const QSerialPortInfo &pointerifor : QSerialPortInfo::availablePorts())
    {
        qDebug() << "Port name: " << pointerifor.portName() ;
        qDebug() << "Port Location: " << pointerifor.systemLocation();
        qDebug() << "Port Decription: " << pointerifor.description();
        qDebug() << "Device Manufacturer: " << pointerifor.manufacturer();
        qDebug() << "Device Serial Number: " << pointerifor.serialNumber();
        qDebug() << "Device Venor Identifier" << pointerifor.vendorIdentifier();
        qDebug() << "Device Product Identifier" << pointerifor.productIdentifier();
    }
}

MainWindow::~MainWindow() {}
