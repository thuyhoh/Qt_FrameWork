import QtQuick

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")

    // Row {
    //     x: 0; y: 0
    //     Rectangle {
    //         width:100;height:100
    //         color:"green"
    //     }

    //     Rectangle {
    //         width:100;height:100
    //         color:"red"
    //     }

    //     Rectangle {
    //         width:100;height:100
    //         color:"yellow"
    //     }

    //     Rectangle {
    //         width:100;height:100
    //         color:"blue"
    //     }
    // }

    // Column {
    //     x: 100; y: 100
    //     Rectangle {
    //         width:100;height:100
    //         color:"green"
    //     }

    //     Rectangle {
    //         width:100;height:100
    //         color:"red"
    //     }

    //     Rectangle {
    //         width:100;height:100
    //         color:"yellow"
    //     }

    //     Rectangle {
    //         width:100;height:100
    //         color:"blue"
    //     }
    // }

    Grid {
        x: 200; y: 200
        rows : 2
        columns:  2
        Rectangle {
            width:100;height:100
            color:"green"
        }

        Rectangle {
            width:100;height:100
            color:"red"
        }

        Rectangle {
            width:100;height:100
            color:"yellow"
        }

        Rectangle {
            width:100;height:100
            color:"blue"
        }
    }

}
