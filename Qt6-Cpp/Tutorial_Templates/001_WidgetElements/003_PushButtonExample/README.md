# Button
- Example code: ``.\Tutorial_Templates\003_PushButtonExample``
``` Cpp
QPushButton *btn = new QPushButton(this);
btn->setText("Click");
btn->setGeometry(0,100, 100,100);
btn->setFont(QFont("Times", 15));
btn->setIcon(QIcon(":/images/qt.png"));
btn->setIconSize(QSize(36,36));
```