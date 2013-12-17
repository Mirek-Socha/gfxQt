#include "mywidget.h"

myWidget::myWidget(QWidget *parent) :
    QWidget(parent)
{
}

void myWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.setPen(Qt::blue);
    painter.fillRect(rect(),Qt::red);
    painter.setFont(QFont("Arial", 30));
    painter.drawText(rect(), Qt::AlignCenter, "Qt");
}

void myWidget::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton) {
        qDebug() << event->pos();
    }
    if (event->button() == Qt::RightButton) {
        qDebug() << event->globalPos();
    }
    qDebug() << "klawisz: " << event->button();
}
