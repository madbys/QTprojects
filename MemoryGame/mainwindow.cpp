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

void MainWindow::on_pushButton_red_pressed()
{
    ui->pushButton_red->setStyleSheet("background-color: pink");
}

void MainWindow::on_pushButton_red_released()
{
    ui->pushButton_red->setStyleSheet("background-color: red");
}

void MainWindow::on_pushButton_blue_pressed()
{
     ui->pushButton_blue->setStyleSheet("background-color: lightblue");
}

void MainWindow::on_pushButton_blue_released()
{
    ui->pushButton_blue->setStyleSheet("background-color: blue");
}

void MainWindow::on_pushButton_green_pressed()
{
    ui->pushButton_green->setStyleSheet("background-color: lightgreen");
}

void MainWindow::on_pushButton_green_released()
{
    ui->pushButton_green->setStyleSheet("background-color: green");
}

void MainWindow::on_pushButton_yellow_pressed()
{
    ui->pushButton_yellow->setStyleSheet("background-color: orange");
}

void MainWindow::on_pushButton_yellow_released()
{
    ui->pushButton_yellow->setStyleSheet("background-color: yellow");
}
