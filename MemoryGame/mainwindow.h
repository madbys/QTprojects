#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QList>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void Play();

private slots:
   void on_pushButton_red_pressed();

   void on_pushButton_red_released();

   void on_pushButton_blue_pressed();

   void on_pushButton_blue_released();

   void on_pushButton_green_pressed();

   void on_pushButton_green_released();

   void on_pushButton_yellow_pressed();

   void on_pushButton_yellow_released();

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
