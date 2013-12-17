#ifndef MYWIDGET_H
#define MYWIDGET_H

#include <QWidget>
#include <QPainter>
#include <QMouseEvent>
#include <QDebug>

class myWidget : public QWidget
{
    Q_OBJECT
public:
    explicit myWidget(QWidget *parent = 0);
    
    void paintEvent(QPaintEvent *event);
    void mousePressEvent(QMouseEvent *);

signals:
    
public slots:
    
};

#endif // MYWIDGET_H
