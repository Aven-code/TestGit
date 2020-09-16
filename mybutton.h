#ifndef MYBUTTON_H
#define MYBUTTON_H

#include <QMainWindow>
#include <QPushButton>

class Mybutton : public QPushButton
{
    Q_OBJECT
public:
    explicit Mybutton(QWidget *parent = nullptr);
    ~Mybutton();

signals:

public slots:
};

#endif // MYBUTTON_H
