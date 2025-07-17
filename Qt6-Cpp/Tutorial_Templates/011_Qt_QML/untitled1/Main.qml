import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("QML")

        Button {
            id:button
            x:12;y:12
            text:"Change Text"
            onClicked: {
                status.text = "Welcome to Qt6 Course"
                status.font.pixelSize=20
                status.color="red"
            }
        }

        Button {
            id:button2
            x:30;y:30
            text:"Another Button"
            onClicked: {
                status.text = "New Text"
                status.font.pixelSize=20
                status.color="red"
            }
        }


        Text {
            id:status
            x:12;y:76
            width:116;height:26
            text:"Waiting...."
            horizontalAlignment: Text.AlignHCenter
        }
}
