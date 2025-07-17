import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Text {
        id: text1
        x: 195
        y: 111
        width: 287
        height: 16
        color: "#7c0e0e"
        text: qsTr("Welcome to Qt6 Course")
        font.pixelSize: 31
        font.styleName: "Bold"
        font.family: "Times New Roman"
    }

    TextInput {
        id: textInput
        x: 436
        y: 189
        width: 80
        height: 20
        text: qsTr("Text Input")
        font.pixelSize: 21
    }

    Column {
        id: column
        x: 327
        y: 46
        width: 200
        height: 400
    }
}
