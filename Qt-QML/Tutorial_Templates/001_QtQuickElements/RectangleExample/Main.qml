import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    Rectangle{
        id: rect1
        x: 0;y: 0
        width: 200; height: 100
        color: "red"
        border{
            color: "green"
            width: 10
        }
        radius: 15
    }

    Rectangle{
        id: rect2
        x: 220; y: 0
        width: 200; height: 100
        color: "red"
        border{
            color: "green"
            width: 10
        }
        radius: 50
    }

    Rectangle{
        id: rect3
        x: Window.width/2; y: Window.height/2
        width: 200; height: 200
        gradient: Gradient{
            GradientStop {position: 0.0; color: "red"}
            GradientStop {position: 0.5; color: "blue"}
        }
        border.color: "slategray"
        border.width: 5;
    }

}
