import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ColumnLayout{
        anchors.centerIn: parent

        ProgressBar{
            id: control
            value: 0.75

            background: Rectangle{
                implicitWidth: 200; implicitHeight: 6
                color: "white"
                radius: 3
            }

            contentItem: Item {
                id: item
                implicitWidth: 200; implicitHeight: 4
                Rectangle{
                    width: control.visualPosition * parent.width
                    height: parent.height
                    radius: 2
                    color: "green"
                }
            }
        }
    }
}
