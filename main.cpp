#include <QApplication>
#include "mainwindow.h"

/*
 Tutorial Topics:
 -QGraphicsPixmapItem,QPixmap,QImage
*/

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}

