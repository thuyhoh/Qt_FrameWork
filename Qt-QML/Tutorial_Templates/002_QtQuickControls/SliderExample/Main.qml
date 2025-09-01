import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ColumnLayout{
        anchors.centerIn: parent

        Slider{
            from: 1
            value:25
            to:100
            id:control

            background: Rectangle {
                x: control.leftPadding
                y: control.topPadding + control.availableHeight / 2 - height /2
                implicitWidth: 200
                implicitHeight: 4
                width: control.availableWidth
                height: implicitHeight
                radius: 2
                color:"gray"

                Rectangle  {
                    width: control.visualPosition * parent.width
                    height: parent.height
                    color:"red"
                    radius: 2
                }
            }

            handle: Rectangle {
                x:control.leftPadding +  control.visualPosition * (control.availableWidth - width)
                y:control.topPadding + control.availableHeight / 2 - height / 2
                implicitWidth: 26
                implicitHeight:26
                radius: 13
                color:control.pressed ? "yellow" : "white"
                border.color: "green"
            }

        }
    }
}
