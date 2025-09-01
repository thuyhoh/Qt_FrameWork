import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Button {
        text: "Open"
        onClicked: popup.open()
    }

    Popup {
        id:popup
        x:100
        y:100
        height:200
        width:200
        modal:true
        focus: true
        closePolicy: Popup.CloseOnEscape | Popup.CloseOnPressOutsideParent

        contentItem: Text {
            text: "Welcome to Qt6 Course"
            font.pixelSize: 20
            color:"red"
        }
    }

}
