import QtQuick

Rectangle {
    id:root
    property alias text: label.text
    signal clicked
    width:116;height:26
    color:"red"
    border.color: "green"

    Text {
        id:label
        anchors.centerIn: parent
    }

    MouseArea {
        anchors.fill: parent
        onClicked: {
            root.clicked()
        }
    }

}
