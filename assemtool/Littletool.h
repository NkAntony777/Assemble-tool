
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


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();


    void on_pushButton_3_clicked();
};
#endif // LITTLETOOL_H
