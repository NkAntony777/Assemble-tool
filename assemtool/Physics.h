
#ifndef PHYSICS_H
#define PHYSICS_H
#include<QWidget>



namespace Ui {

class Physics;

}

class Physics :public QWidget
{
    Q_OBJECT

public:
    explicit Physics(QWidget *parent=0);

    ~Physics();

private slots:
    void on_wuliButton_clicked();
    void showPhysics();


    void on_backbutton_clicked();

    void on_ExitButton_clicked();

    void on_twoBUtton_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void gobackMain();




private:
    Ui::Physics *ui;
};
#endif // PHYSICS_H
