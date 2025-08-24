# Qt6-C++ GUI & Mobile App Developer

## I. Cấu trúc một project Qt C++
```
MyQtProject/  
│
├── CMakeLists.txt
└── Qt Designer/
    ├── Forms/
    │   └── mainwindow.ui       # File giao diện thiết kế bằng Qt Designer
    ├── Header Files/
    │   └── mainwindow.h        # Header của MainWindow
    ├── Resources/
    │   └── resources.qrc       # File Qt Resource chứa tài nguyên 
    └── Source Files/
        ├── main.cpp            # Hàm main khởi chạy ứng dụng
        └── mainwindow.cpp      # Logic xử lý chính của cửa sổ
```
-  thêm nguồn dữ liệu vào file.qrc
    - mở file .qrc dưới dạng Resource Editor
    - Add Prefix -> Add Files -> nguồn dữ liệu 
    - sửa nội dung trong CMakelists.txt
``` Make
set(PROJECT_SOURCES
        resources.qrc   
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)   
```
## II. Mục lục
[1. Widget Elements]()
[2. UI Designer]()
[3. Signals and Slots]()
[4. Painting and Graphics]()
[5. Qt Chart]()
[6. Drag and Drop]()
[7. Multimedia]()
[8. MDI and SDI Windowns]()
[9. Qt Animation]()
[10. Web engine]()
[11. Connect to Database]()
[12. Serial COM Port Application]()
