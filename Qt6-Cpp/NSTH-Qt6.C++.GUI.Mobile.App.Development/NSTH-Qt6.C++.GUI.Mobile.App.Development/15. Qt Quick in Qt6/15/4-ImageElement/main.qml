import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Image {
        x:20;y:20
        width:200
        height:100
        source:"qrc:image/qml.png"


    }
}
