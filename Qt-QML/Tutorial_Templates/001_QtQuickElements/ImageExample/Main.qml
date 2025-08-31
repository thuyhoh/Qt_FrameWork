import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Image {
        id: img
        source: "qrc:/Images/qt.png"
        height: parent.height; width: parent.width
    }
}
