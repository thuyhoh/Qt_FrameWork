import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Text {
        id: text1
        text: qsTr("Hello World!\nMy name is Thuy");
        x: 100;y: 100
        font.family: "Times"
        font.pixelSize: 28
        color: "red"
    }
}
