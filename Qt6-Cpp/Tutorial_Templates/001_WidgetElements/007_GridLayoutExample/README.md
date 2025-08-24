# Grid layout
![image](./Tutorial_img/gridbox.png)
- Example code: ``.\Tutorial_Templates\007_GridLayoutExample``
``` Cpp
QGridLayout *grid = new QGridLayout(this);
grid->addWidget(btn1, 0, 0);
grid->addWidget(btn2, 0,1);
grid->addWidget(btn3, 1,0);
grid->addWidget(btn4, 1,1);
```