import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Dialog Button Box Example")

    ColumnLayout{
        anchors.centerIn: parent

        DialogButtonBox{
            standardButtons: DialogButtonBox.Ok | DialogButtonBox.Cancel

            onAccepted: console.log("Ok clicked")
            onRejected: console.log("Cancel clicked")
        }
    }

}
