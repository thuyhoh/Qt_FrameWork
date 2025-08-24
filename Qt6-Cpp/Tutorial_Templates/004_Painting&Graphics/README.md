# Drawing & Graphics
- để vẽ thì phải được viết vào trong virtual function
``` cpp
public:
    Mainwindow(QMain *parent = nullptr);
    ~Mainwindow();
    virtual void paintEvent(QPaintEvent *event);
```
## Drawing text
``` cpp
QPainter myPainter(this);
myPainter.setFont(QFont("Times", 20));
myPainter.drawText(QPoint(100,100), "Qt6 Course");
```
## Drawing html document
``` cpp
QTextDocument textDocument;
textDocument.setHtml("<b>Welcome to Qt6 Course</b><i>Udemy Course</i><font size='15' color='red'>Enjoy the course</font>");
textDocument.drawContents(&myPainter);
```

## Drawing line 
``` cpp
myPainter.drawLine(QPoint(50,50), QPoint(200,200));
```

## Drawing rect
``` Cpp
myPainter.drawRect(QRect(40,120, 200,200));
```

``` Cpp
QPainterPath rectPath;
rectPath.addRect(QRect(150, 20,200, 200));
QPainter pathPainter(this);
pathPainter.setPen(QPen(Qt::GlobalColor::red,1,Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin ));
pathPainter.setBrush(Qt::yellow);
pathPainter.drawPath(rectPath);
```
## Drawing Ellipes
``` Cpp
QPen ellipsePen;
ellipsePen.setColor(Qt::GlobalColor::red);
ellipsePen.setStyle(Qt::DashDotDotLine);
myPainter.setPen(ellipsePen);
myPainter.drawEllipse(QPoint(300,200), 80,50);
```

``` Cpp
QPainterPath rectPath;
rectPath.addRect(QRect(150, 20,200, 200));
QPainter pathPainter(this);
pathPainter.setPen(QPen(Qt::GlobalColor::red,1,Qt::DashDotLine, Qt::FlatCap, Qt::MiterJoin ));
pathPainter.setBrush(Qt::yellow);
pathPainter.drawPath(rectPath);
```

## Drawing image
``` Cpp
QImage image;
image.load(":/image/qt.png");
QPainter imagePainter(this);
imagePainter.drawImage(QPoint(100,150), image);
```