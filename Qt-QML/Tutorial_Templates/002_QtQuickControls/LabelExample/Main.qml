import QtQuick.Controls

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Label{
        text: "Hello world"
        anchors.centerIn: parent
        font.pixelSize: 22
        font.bold: true
        font.italic: true
        font.underline: true
        color: "red"
    }

}
