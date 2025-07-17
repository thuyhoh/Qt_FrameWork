import QtQuick

Window {
    width: 800
    height: 500
    visible: true
    color: "#e61515"
    visibility: Window.FullScreen
    title: qsTr("First QML Window")

    Rectangle {
        id: rectangle
        x: 133
        y: 150
        width: 200
        height: 200
        color: "#ffffff"
    }
}
