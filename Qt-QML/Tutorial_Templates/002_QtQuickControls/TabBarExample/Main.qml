import QtQuick.Controls
import QtQuick.Layouts
import QtQuick

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    TabBar {
        id: bar
        width: parent.width
        TabButton {
            text: qsTr("Python")
        }
        TabButton {
            text: qsTr("C++")
        }
        TabButton {
            text: qsTr("Java")
        }
    }

    StackLayout {
        width: parent.width
        currentIndex: bar.currentIndex
        Item {
            id: pythonTab
        }
        Item {
            id: cppTab
        }
        Item {
            id: javaTab
        }
    }
}


