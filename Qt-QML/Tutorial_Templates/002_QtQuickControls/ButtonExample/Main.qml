import QtQuick
import QtQuick.Controls

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Button{
        id: btn1
        x: 100; y: 100
        width: 100; height: 100
        text: "button 1"
        font.pixelSize: 10
    }

    Button{
        id: btn2
        text: "button 2"

        contentItem: Text{
            text: btn2.text
            font: btn2.font
            opacity: enabled ? 1.0 : 0.3
            color: btn2.down ? "red": "blue"
            horizontalAlignment: Text.AlignHCenter
            verticalAlignment: Text.AlignVCenter
        }

        background: Rectangle{
            implicitWidth: 100; implicitHeight: 40
            opacity: enabled ? 1.0: 0.3
            border.color: btn2.down ? "green" : "yellow"
            border.width: 1
            radius: 8
        }

        onClicked: {
            label.text = "button is clicked"
            label.color = "red"
        }
    }

    Label{
        id: label
        text: "hello world"
        anchors.centerIn: parent
        font.pixelSize: 15
    }

}
