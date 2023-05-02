
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

    void paintevent(QPaintEvent*event);
signals:
    void English_Function();//
    //void quit();

public slots:
    void SFMgotoEnglish();
private slots:
    void on_backbutton_clicked();


    void on_exitbutton_clicked();




    void on_Chatgptbutton_clicked();

    void on_VPNbutton_clicked();







    void on_bingchatbutton_clicked();

    void on_ebook_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

signals:
    void backtomain();

private:
    Ui::English *ui;
};

#endif // ENGLISH_H
