# PyQt5
## I. Install Qt-tools
### 1. Install PyQt
#### i. Install PyQt5
- Installing Python 3.11.1
``` bash
pip install pyqt5
pip install PyQt5Designer
pip install PyQt5-tools
```
#### ii. Install PyQt6
``` bash
pip install pyqt6
pip install PyQt6Designer
pip install PyQt6-tools
```
### 2. Run cmd Qt-Designer
``` bash
designer
```
### 3. Convert file.ui to file.py
- for PyQt5
``` bash 
pyuic5 -x fileName.ui -o fileName.py
```
- for PyQt6
```bash
pyuic6 -x fileName.ui -o fileName.py
```

## II. GUI
### 1. Label
- Text
``` Python
label = QLabel(self)
label.setText("New Text is Here")
label.move(100,100)
label.setFont(QFont("Sanserif", 15))
label.setStyleSheet('color:red')

#label.setText(str(12))
# label.setNum(15)
# label.clear()
```
- Image
``` Python
label = QLabel(self)
pixmap = QPixmap('images/python.png')
label.setPixmap(pixmap)
```
- GIF
```Python
label = QLabel(self)
movie = QMovie('images/sky.gif')
movie.setSpeed(500)
label.setMovie(movie)
movie.start()
```

### 2. Button
``` Python
btn = QPushButton("Click", self)
btn.setGeometry(100,100, 130,130)
btn.setFont(QFont("Times", 14, QFont.Weight.ExtraBold))
btn.setIcon(QIcon("images/python.png"))
btn.setIconSize(QSize(36,36))

# thêm menu vào btn
menu = QMenu()
menu.setFont(QFont("Times", 14, QFont.Weight.ExtraBold))
menu.setStyleSheet('background-color:green')
menu.addAction("Copy")
menu.addAction("Cut")
menu.addAction("Paste")
btn.setMenu(menu)
```
#### 3. Line Edit
#### 4. Layout
#### 5. Radio Button
#### 6. Signals Slots
#### 7. CheckBox
#### 8. SpinBox
#### 9. LCD Number
#### 10. Combo 
#### 11. Slider
#### 12. ListWidget
#### 13. TableWidget
#### 14. Color Dialog
#### 15. Forn Dialog
#### 16. Input Dialog
#### 16. MessageBox


