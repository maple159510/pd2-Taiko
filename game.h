#ifndef GAME_H
#define GAME_H

#include<QGraphicsView>
#include<QWidget>
#include<QGraphicsScene>
#include"player.h"
#include"score.h"
#include"timer.h"


class Game: public QGraphicsView{
public:
    Game();

    QGraphicsScene * scene;
    Player * player;
    Score * score;
    Time * time;
};


#endif // GAME_H
