import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ColumnLayout{
        anchors.centerIn: parent

        SpinBox{
            id: sinbox
            value: 50
            onValueChanged: {
                label.text = "Selected value is " + SpinBox.displayText
            }
        }

        Label{
            id: label
            font.pixelSize: 20
        }
    }
}
