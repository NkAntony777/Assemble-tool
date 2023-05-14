
#ifndef ENGLISH_H
#define ENGLISH_H
#include<QPushButton>

#include<QWidget>
namespace Ui {

class English;

}

class English :public QWidget
{
    Q_OBJECT

public:
    explicit English(QWidget *parent=0);

    ~English();


signals:
    void English_Function();//
    //void quit();

public slots:
    void SFMgotoEnglish();
private slots:
    void on_backbutton_clicked();


    void on_exitbutton_clicked();




    void on_Chatgptbutton_clicked();

    void on_recitebutton_clicked();

signals:
    void backtomain();

private:
    Ui::English *ui;
};

#endif // ENGLISH_H
