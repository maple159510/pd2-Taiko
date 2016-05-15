#ifndef TIMER_H
#define TIMER_H

#include<QGraphicsTextItem>
#include<QGraphicsItem>
#include<QObject>
#include"monster.h"

class Time:public QGraphicsTextItem{
    Q_OBJECT
public:
    Time(QGraphicsItem *parent=0);
private:
    int time;
public slots:
    void decrease();
    int getTime();
};

#endif // TIMER_H
