import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle {
        id:button
        x:12;y:12
        width:116;height:26
        color:"lightsteelblue"
        border.color: "slategrey"

        Text {
            anchors.centerIn: parent
            text:"Change Text"


        }

        MouseArea {
            anchors.fill: parent
                        onClicked: {
                            status.text = "Welcome to Qt6 Course"
                            status.color="red"
                            status.font.pixelSize = 20



                        }




        }

    }

    Text {
        id:status
        x:12;y:76
        width:116;height:26
        text:"Hello World"



    }
}
