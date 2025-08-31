import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Button{
        id: button
        x: 12; y:12
        text: "change Text"
    }

}
