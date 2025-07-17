import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")


    Rectangle {
        id:rect1
        x:12;y:12
        width:76;height:96
        color:"red"

        MouseArea {
            id:area
            width: parent.width
            height:parent.height
            onClicked: rect2.visible = !rect2.visible


        }

    }

    Rectangle {
        id:rect2
        x:112;y:12
        width:76;height:96
        border.color: "green"
        border.width: 4
        radius: 8



    }
}
