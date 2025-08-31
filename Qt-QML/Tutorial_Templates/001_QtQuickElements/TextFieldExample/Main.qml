import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Text Field Example")

    Text{
        id: text1
        x: 200;y: 200
        color: green
        text: "text"
        font.pixelSize: 20
        font.bold: true
    }

    TextInput{
        id:  myInput
        x: 100; y: 100
        text: "hello World!"
        color: "red"
        font.pixelSize: 20
        onAccepted: text1.text = text
    }
}
