import QtQuick.Controls
import QtQuick

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "ContextMenu Example"

    MouseArea {
        anchors.fill: parent

        acceptedButtons: Qt.LeftButton | Qt.RightButton

        onClicked: (mouse) => {
           if(mouse.button === Qt.RightButton)
               contextMenu.popup()
        }
        Menu {
            id: contextMenu
            MenuItem {text:"Cut"}
            MenuItem {text:"Copy"}
            MenuItem {text:"Paste"}
        }
    }
}
