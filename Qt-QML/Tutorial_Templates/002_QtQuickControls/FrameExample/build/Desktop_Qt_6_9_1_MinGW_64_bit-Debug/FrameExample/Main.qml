import QtQuick.Controls
import QtQuick.Layouts
import QtQuick

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "Frame Example"

    Frame {
        Text {
            anchors.fill: parent
            id: tx
            text: "Select language"
        }

        ColumnLayout {
            anchors.top: tx.bottom
            CheckBox {text:"Python"}
            CheckBox {text:"C++"}
            CheckBox {text:"Java"}
        }
    }
}
