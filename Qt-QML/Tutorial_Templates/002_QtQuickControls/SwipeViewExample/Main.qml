import QtQuick.Controls
import QtQuick

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "SwipeView Example"

    SwipeView {
        id:view
        currentIndex: 1
        anchors.fill: parent

        background: Rectangle {
            color:"yellow"
        }

        Item {
            id:firstPage

            Label {
                text:"First Page"
                anchors.centerIn: parent
                font.pixelSize: 20
            }
        }

        Item {
            id:secondPage

            Label {
                text:"Second Page"
                anchors.centerIn: parent
                font.pixelSize: 20
            }
        }

        Item {
            id:thirdPage

            Label {
                text:"Third Page"
                anchors.centerIn: parent
                font.pixelSize: 20
            }
        }
    }

    PageIndicator {
        id:indicator
        count:view.count
        currentIndex: view.currentIndex

        anchors.bottom: view.bottom
        anchors.horizontalCenter: parent.horizontalCenter
    }
}
