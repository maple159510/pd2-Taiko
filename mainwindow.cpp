#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include "game.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

Game * game;

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    Game* game= new Game();
    game->show();
}
