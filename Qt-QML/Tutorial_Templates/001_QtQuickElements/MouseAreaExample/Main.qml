import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id: rect1
        x: 0; y: 0
        width: 100; height: 200
        color: "red"
        border.color: "black"
        border.width: 3
        MouseArea {
            id: area
            width: parent.width; height: parent.height
            onClicked: rect2.visible = !rect2.visible
        }
    }

    Rectangle{
        id: rect2
        x: 150; y: 0
        width: 100; height: 200
        border.color: "blue"
        border.width: 3
    }

    Rectangle{
        id: button
        x: 0; y: 250
        width: 100; height: 30
        border.color: "black"
        border.width: 4

        Text {
            id: text
            x: 12; y: 10
            font.pixelSize: 10
            text: qsTr("Change state")
        }

        MouseArea{
            anchors.fill: parent
                        onClicked: {
                            status.text = "Change status"
                            status.color = "read"
                            status.font.pixelSize = 20
                        }
        }
    }

    Text {
        id: status
        x: 250; y: 270
        font.pixelSize: 20
        text: qsTr("Status of button")
    }
}
