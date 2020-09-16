#include "mybutton.h"
#include <QDebug>

Mybutton::Mybutton(QWidget *parent) : QPushButton(parent)
{

}

Mybutton::~Mybutton()
{
    qDebug() << "this is mybutton" <<endl;
}
