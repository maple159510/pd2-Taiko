#include"punch.h"
#include<QTimer>
#include<QGraphicsScene>
#include<QList>
#include"monster.h"
#include<typeinfo>
#include"game.h"

extern Game * game;//there is an external global object called game


Punch::Punch(QGraphicsItem *parent):QObject(), QGraphicsPixmapItem(parent){
    //drew the bullet(a rectangle)
    setPixmap(QPixmap(":/images/punch.png"));
    //make/connect a timer to move() the bullet every so often
    QTimer * timer = new QTimer(this);
    connect(timer,SIGNAL(timeout()),this,SLOT(move()));

    timer->start(100);
}

void Punch::move(){
    //if bullet collides with enemy, destroy both
    QList<QGraphicsItem *> colliding_items = collidingItems();
    for(int i=0,n=colliding_items.size();i<n;++i){
        if(typeid(*(colliding_items[i]))==typeid(Monster)){
            //increase the score
            game->score->increase();

            //remove monsters on the scene (still on the heap)
            scene()->removeItem(colliding_items[i]);
            scene()->removeItem(this);//remove punches from the scene
            //delete them from the heap to save memory
            delete colliding_items[i];
            delete this;//delete them from the heap to save memory
        }
        else {
            scene()->removeItem(this);//remove punches from the scene
            delete this;//delete them from the heap to save memory
        }
    }
}
