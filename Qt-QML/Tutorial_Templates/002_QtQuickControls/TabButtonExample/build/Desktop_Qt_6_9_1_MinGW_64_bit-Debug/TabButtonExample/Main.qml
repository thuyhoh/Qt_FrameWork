import QtQuick.Controls
import QtQuick.Layouts
import QtQuick

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "Tab Button"

    ColumnLayout {
        anchors.centerIn: parent

        TabBar {
            TabButton {
                text: "Python"
                width:80
                height:50


            }

            TabButton {
                text:"C++"
                width:80
                height:50

            }

            TabButton {
                text:"Java"
                width:80
                height:50

            }


        }


    }
}
