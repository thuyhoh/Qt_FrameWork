import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Column {
        anchors.centerIn:parent

        TextInput {
            id:input1
            width:96;height:20
            text:"Text Input 1"
            focus: true
            KeyNavigation.tab: input2


        }

        TextInput {
            id:input2
            width:100; height:20
            text: "Text input 2"
            color:"red"
            font.pixelSize: 20
            KeyNavigation.tab: input1



        }

        Rectangle {
            width:96;height:96
            color:"lightsteelblue"
            border.color: "gray"

            TextEdit {
                id:input
                anchors.fill: parent
                anchors.margins: 4




            }



        }

    }
}
