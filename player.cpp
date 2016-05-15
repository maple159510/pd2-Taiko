#include"player.h"
#include<QGraphicsScene>
#include<QKeyEvent>
#include"monster.h"
#include"punch.h"
#include<QDebug>
#include<QtCore>
#include<QKeyEvent>
#include<QGraphicsScene>

Player::Player(QGraphicsItem *parent): QGraphicsPixmapItem(parent){

}

void Player::keyPressEvent(QKeyEvent *event){

    if(event->key() == Qt::Key_J){
        Punch * punch = new Punch();
        punch->setPos(x(),200);
        scene()->addItem(punch);
        qDebug()<<"KEY_J";
    }
    else if(event->key() == Qt::Key_K){
        Punch * punch = new Punch();
        punch->setPos(x(),200);
        scene()->addItem(punch);
        qDebug()<<"KEY_K";
    }
}

void Player::spawn()
{
    //create a monster
    Monster * monster = new Monster();
    scene()->addItem(monster);
}
