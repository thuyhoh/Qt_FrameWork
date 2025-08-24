# Label
- Label có chức năng hiển thị text, hình ảnh, ảnh động(GIF). Label trong thư viên QLabel
- Example Code: ``.\Tutorial_Templates\002_Label_Example``
- Hiển thị Text 
```Cpp
QLabel *label = new QLabel(this);
label->setText("This is the text");
label->setFont(QFont("Sanserif", 14));
label->setGeometry(100,100, 120,300);
label->setStyleSheet("color:red");
```
- Hiển thị hình ảnh
``` Cpp
QLabel *label = new QLabel(this);
label->setPixmap(QPixmap(":/Images/Images.png"));
```
- Hiển thị ảnh động (GIF)
``` Cpp
QLabel *label = new QLabel(this);
QMovie *movie = new QMovie(":/Images/GIF.gif"); 
label->setMovie(movie);
movie->start();
```