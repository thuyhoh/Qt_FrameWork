import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    TextInput {
        id:myText
        text:"Hello World"
        color:"red"
        font.pixelSize: 20
        x:50;y:50
        onAccepted: text1.text=text
    }

    Text {
        id:text1
        color:"green"
        x:80;y:80
        font.pixelSize: 20
        text:"My Text"



    }
}
