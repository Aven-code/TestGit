#include "widget.h"
#include "ui_widget.h"
#include <QDebug>


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    btn = new QPushButton("hello",this);
    sw = new QPushButton("切换到子窗口",this);
    sw->resize(100,100);
    sw->move(100,0);
    my = new Mybutton(this);
    my->resize(100,100);
    my->setText("my button");
    connect(my,&QPushButton::clicked,this,&Widget::widPrintf);


    //创建子窗口
    sub = new subWidget();
    sub->hide();


    connect(sw,&QPushButton::clicked,this,&Widget::showSub);    //跳转的信号链接
    connect(sub,&subWidget::backof,this,&Widget::showPare);
}

Widget::~Widget()
{

    delete ui;
    qDebug() << "this is parent" <<endl;
}

void Widget::widPrintf()
{

    static int x = 0;
    qDebug() << "x:" << x++ <<endl;
}

void Widget::showSub()
{
    this->sub->show();
    this->hide();
}



void Widget::showPare()
{
    this->sub->hide();
    this->show();
}
