
#ifndef LITTLETOOL_H
#define LITTLETOOL_H

#include<QWidget>

namespace Ui { class Littletool; }


class Littletool : public QWidget

{
    Q_OBJECT

public:
   explicit Littletool(QWidget *parent = nullptr);
    ~ Littletool();

private:
    Ui::Littletool *ui;


public  slots:
    void ReciMain();
signals:
    void goback();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_7_clicked();
};
#endif // LITTLETOOL_H
