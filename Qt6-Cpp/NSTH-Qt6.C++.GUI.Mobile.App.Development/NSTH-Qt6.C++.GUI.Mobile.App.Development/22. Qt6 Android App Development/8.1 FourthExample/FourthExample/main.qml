import QtQuick
import QtQuick.Controls
import QtQuick.Controls.Material
import Qt.labs.platform as Platform

ApplicationWindow {
    width: 640
    height: 480
    visible: true
    title: "Image Viewer"
    color:"darkgray"
    id: window

    Drawer {
        id: drawer
        width: Math.min(window.width, window.height) / 3*2
        height:window.height

        ListView {
            focus:true
            currentIndex: -1
            anchors.fill: parent


            delegate: ItemDelegate {
                width:parent.width
                text:model.text
                highlighted: ListView.isCurrentItem
                onClicked: {
                    drawer.close()
                    model.triggered()
                }



            }

            model: ListModel {
                ListElement {
                    text:"Open"
                    triggered: function() {fileOpenDialog.open();}


                }
            }

            ScrollIndicator.vertical: ScrollIndicator {}


        }




    }

    Image {
        id: image
        anchors.fill: parent
        fillMode: Image.PreserveAspectFit
        //source:"qrc:image/android.png"


    }

    Platform.FileDialog {
        id: fileOpenDialog
        title: "Select an image"
        folder: Platform.StandardPaths.writableLocation(Platform.StandardPaths.DocumentsLocation)
        nameFilters: [
            "Image files (*.png *.jpeg *.jpg)",

        ]
        onAccepted: {
            image.source = fileOpenDialog.file



        }




    }

    header: ToolBar {
        Material.background: Material.Orange

        ToolButton {
            id: menuButton
            anchors.left: parent.left
            anchors.verticalCenter: parent.verticalCenter
            icon.source: "qrc:///image/menu.png"
            onClicked: {
                drawer.open();

            }


        }

        Label {
            anchors.centerIn: parent
            text: "Image Viewer"
            font.pixelSize: 20
            elide: Label.ElideRight




        }


    }

}
