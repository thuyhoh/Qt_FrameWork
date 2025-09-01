import QtQuick
import QtQuick.Controls
import QtQuick.Layouts

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    ColumnLayout{
        id: lo1
        anchors.centerIn: parent
        CheckBox{
            id: cb1
            checked: true
            text: "C++"
            font.pixelSize: 15
            onClicked: {
                lb1.text = "kết quả đã chọn: " + cb1.text
            }
        }

        CheckBox{
            id: cb2
            checked: true
            text: "Python"
            font.pixelSize: 15
            onClicked: {
                lb1.text = "kết quả đã chọn: " + cb2.text
            }
        }

        CheckBox{
            id: cb3
            checked: false
            text: "Java"
            font.pixelSize: 15
            onClicked: {
                lb1.text = "kết quả đã chọn: " + cb3.text
            }
        }

        CheckBox{
            id: cb4
            checked: true
            text: "JavaScript"
            font.pixelSize: 15
            onClicked: {
                lb1.text = "kết quả đã chọn: " + cb4.text
            }
        }
    }

    Label{
        id: lb1
        x: 0; y: parent.width/2
        text: "kết quả đã chọn: "
        font.bold: true
        font.italic: true
        font.pixelSize: 20
    }

}
