#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->pushButton_red->setStyleSheet("background-color: red");
    ui->pushButton_blue->setStyleSheet("background-color: blue");
    ui->pushButton_green->setStyleSheet("background-color: green");
    ui->pushButton_yellow->setStyleSheet("background-color: yellow");

}

MainWindow::~MainWindow()
{
    delete ui;
}
