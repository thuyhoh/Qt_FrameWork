import QtQuick.Controls
import QtQuick
import QtQuick.Layouts


ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Label{
        id: lb1
        text: "Kết quả đã chọn: "
    }

    ColumnLayout{
        anchors.centerIn: parent
        ComboBox{
            id: combo1
            model: ["C++", "Python", "Java", "JavaScript"]
            font.pixelSize: 15

            onActivated: {
                lb1.text = "Kết quả đã chọn: " + combo1.currentText
            }
        }

        ComboBox{
            editable: true
            model: ListModel{
                id: model
                ListElement { text: "Python" }
                ListElement { text: "C++" }
                ListElement { text: "Java" }
            }

            onAccepted: {
                if(find(editText) === -1){
                    model.append( {text:editText} )
                }
            }
        }
    }

}
