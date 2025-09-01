import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Button  {
        text:"Click"
        font.pixelSize: 20
        onClicked: popup.open()
    }

    /*
    Popup {
        id:popup
        parent:Overlay.overlay
        x:Math.round((parent.width - width) / 2)
        y:Math.round((parent.height - height) / 2)
        width:100
        height:100
    }
    */

    Popup {
        id:popup
        width:400
        height:400
        modal:true
        visible: false
        Overlay.modal: Rectangle {
                color:"#aacfdbe7"
        }
    }
}
