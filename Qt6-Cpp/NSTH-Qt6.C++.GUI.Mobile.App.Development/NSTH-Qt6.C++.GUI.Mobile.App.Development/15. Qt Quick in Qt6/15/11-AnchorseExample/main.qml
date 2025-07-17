import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        id:redRect
        width:100;height:100
        color:"red"
        //x:100;y:100
        //anchors.centerIn: parent
        //anchors.margins: 10

        //anchors.left: parent.left
        //anchors.leftMargin: 8

        anchors.horizontalCenter: parent.horizontalCenter

    }

    Rectangle {
        id:greenRect
        width:200;height:200
        color:"green"
        anchors.top: redRect.bottom
        anchors.horizontalCenter: redRect.horizontalCenter

    }
}
