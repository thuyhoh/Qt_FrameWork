import QtQuick.Controls
import QtQuick.Layouts
import QtQuick

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "Frame Example"

    Frame {
        ColumnLayout {
            anchors.top: tx.bottom
            CheckBox {text:"Python"}
            CheckBox {text:"C++"}
            CheckBox {text:"Java"}
        }
    }
}
