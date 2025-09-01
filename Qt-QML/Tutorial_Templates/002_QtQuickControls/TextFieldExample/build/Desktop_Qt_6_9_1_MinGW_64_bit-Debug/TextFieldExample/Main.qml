import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Input Field Example")

    ColumnLayout{
        anchors.centerIn: parent

        TextField{
            id: control
            placeholderText: "Please enter your name"

            background: Rectangle{
                implicitWidth: 200; implicitHeight: 40
                color: control.enabled ? "transparent" : "#353637"
                border.color: control.enabled ? "#21be2b" : "transparent"
            }
        }
    }
}
