#ifndef MONSTER_H
#define MONSTER_H

#include<QGraphicsPixmapItem>
#include<QObject>

class Monster:public QObject, public QGraphicsPixmapItem{
    Q_OBJECT
public:
    Monster(QGraphicsItem *parent=0);
public slots:
    void move();
};

#endif // MONSTER_H
