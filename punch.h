#ifndef PUNCH_H
#define PUNCH_H

#include<QGraphicsItem>
#include<QObject>

class Punch:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Punch(QGraphicsItem *parent=0);
public slots:
    void move();
};

#endif // PUNCH_H
