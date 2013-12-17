#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPainter>

class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = 0);
    
    void paintEvent(QPaintEvent *event);

signals:
    
public slots:
    
};

#endif // MYWIDGET_H
