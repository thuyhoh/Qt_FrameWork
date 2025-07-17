import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Shape {
        id:circle
        x:84;y:68
        source:"qrc:images/circle.png"
        onClicked : {
            x+=20

        }

    }

    Shape {
        id:triangle
        x:248;y:68
        source:"qrc:images/rectangle.png"
        onClicked : {
            rotation += 15
            scale +=0.5


        }



    }
}
