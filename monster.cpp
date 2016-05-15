#include"monster.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include<stdlib.h>//rand()->really large int

#include<QDebug>
Monster::Monster(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent){
    //set random position
    int random_number = rand()%1000;

    setPos(980,200);
    if(random_number%2==0)
    //drew the rect
        setPixmap(QPixmap(":/images/star.png"));
    if(random_number%2==1)
        setPixmap(QPixmap(":/images/green.png"));
    //connect
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(100);
}

void Monster::move(){
    //move monster left
    setPos(x()-50,y());
    if(pos().x() + 100 < 150){
        scene()->removeItem(this);
        delete this;

    }
}
