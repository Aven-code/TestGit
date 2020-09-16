#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;       //创建窗口类对象
    w.show();       //调用对象方法，显示窗口

    return a.exec();
}
