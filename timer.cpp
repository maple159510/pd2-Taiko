#include"timer.h"
#include"game.h"
#include<QDialog>
#include<QDebug>
#include<QFont>
#include<QTimer>
#include<QGraphicsView>
#include<QGraphicsScene>
#include<QGraphicsItem>
Time::Time(QGraphicsItem *parent):QGraphicsTextItem(parent){
    //initialize the timer to 30s
    time = 30;

    //draw the text
    setPlainText(QString("Time: ") + QString::number(time));//Time: 30
    setDefaultTextColor(Qt::red);
    setFont(QFont("times",20));

}

void Time::decrease(){
    if(time>0){
        time--;
        setPlainText(QString("Time: ") + QString::number(time));//Time: 29
    }

}

int Time::getTime(){
    return time;
}


