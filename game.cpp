#include"game.h"
#include<QTimer>
#include<QGraphicsTextItem>
#include<QFont>
#include"monster.h"
#include<QImage>
#include"timer.h"
#include"punch.h"
#include"score.h"
#include"player.h"
#include<time.h>

Game::Game(){
    //create the scene
    scene = new QGraphicsScene();
    scene->setSceneRect(0,0,1000,640);//make the scene 800x600 instead of infinity by infinity
    setBackgroundBrush(QBrush(QImage(":/images/MapleTaiko_Background_2.png")));

    //make the newly created scene the scene to visualize (since Game is a QGraphicsView
    //it can be used to visualize scenes)
    setScene(scene);
    setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    setFixedSize(1000,640);

    //create the player
    player = new Player();
    player->setPos(200,80);//TODO generalize to always be in the middle bottom of screen
    //make the player focusable and set it to be the current focus
    player->setFlag(QGraphicsItem::ItemIsFocusable);
    player->setFocus();
    //add the player to the scene
    scene->addItem(player);

    //create the score
    score = new Score();
    score->setPos(450,10);
    scene->addItem(score);

    //create the timer
    time= new Time();
    time->setPos(450,40);
    scene->addItem(time);

    QTimer * timerr = new QTimer();
    QObject::connect(timerr,SIGNAL(timeout()),time,SLOT(decrease()));
    timerr->start(1000);


    //spawn monsters
    QTimer * timer = new QTimer();
    QObject::connect(timer,SIGNAL(timeout()),player,SLOT(spawn()));

    timer->start(1000);
}
