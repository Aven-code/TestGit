#ifndef SUBWIDGET_H
#define SUBWIDGET_H

#include <QWidget>
#include <QPushButton>

class subWidget : public QWidget
{
    Q_OBJECT
public:
    explicit subWidget(QWidget *parent = nullptr);

private:
    QPushButton subBtn;
signals:
    void backof();
public slots:
    void sendSig();

};

#endif // SUBWIDGET_H
