#include "subwidget.h"

subWidget::subWidget(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(400,400);

    subBtn.setParent(this);
    subBtn.resize(100,100);
    subBtn.setText("切换界面");
    subBtn.move(0,20);

    connect(&subBtn,&QPushButton::clicked,this,[this]()
    {
        emit this->backof();
    });

      this->setWindowTitle("这是子窗口");
}

void subWidget::sendSig()
{
    emit this->backof();
}
