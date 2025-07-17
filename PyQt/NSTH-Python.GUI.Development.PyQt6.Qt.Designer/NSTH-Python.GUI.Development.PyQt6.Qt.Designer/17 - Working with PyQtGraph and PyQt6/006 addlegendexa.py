from PyQt6.QtWidgets import QApplication, QWidget, QHBoxLayout
import sys
import pyqtgraph as pg



class Window(QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("PyQtGraph Add Legend")

        myplot = pg.PlotWidget()

        myplot.addLegend()


        myplot.plot([1,2,2,4],pen='r', name='Red Plot')
        myplot.plot([2,1,4,3], pen='g', fillLevel=0, fillBrush=(255,255,255, 30),name='Green Plot')
        myplot.addLine(y=4,pen='y')

        hbox=  QHBoxLayout()
        hbox.addWidget(myplot)

        self.setLayout(hbox)



app = QApplication(sys.argv)
window = Window()
window.show()
sys.exit(app.exec())