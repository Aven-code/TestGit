#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <mybutton.h>
#include "subwidget.h"



namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT //如果使用信号和槽，必须添加这个宏

public:
    explicit Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void widPrintf();
    void showSub();

    void showPare();

private:
    QPushButton * btn;
    QPushButton * sw;
    Mybutton  * my;
    Ui::Widget *ui;
    subWidget  * sub;
};

#endif // WIDGET_H
