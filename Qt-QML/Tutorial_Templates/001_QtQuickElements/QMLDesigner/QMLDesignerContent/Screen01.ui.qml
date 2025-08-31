

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick
import QtQuick.Controls
import QMLDesigner

Rectangle {
    width: 640
    height: 480
    radius: 18

    Rectangle {
        id: rectangle
        x: 50
        y: 72
        width: 177
        height: 74
        color: "#501dc2"
        border.color: "#9117ad"
    }

    TabButton {
        id: tabButton
        x: 205
        y: 220
        width: 69
        height: 39
        text: qsTr("Tab Button")
    }

    Button {
        Rectangle {
            width: parent.width
            height: parent.height
            Image {
                id: img
                source: "../Images/beaglebone_uart.jpg"
                width: parent.width
                height: parent.height
            }
            radius: 100
        }
        id: button
        x: 212
        y: 327
        text: qsTr("Button")
    }

    DelayButton {
        id: delayButton
        x: 359
        y: 152
        text: qsTr("Delay Button")
    }

    RoundButton {
        id: roundButton
        x: 389
        y: 268
        width: 87
        height: 40
        text: "+"
    }
}
