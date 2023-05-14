#include<Littletool.h>
#include<ui_Littletool.h>
#include<qurl.h>
#include<QDesktopServices>
Littletool::Littletool(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Littletool)
{
    ui->setupUi(this);


};

Littletool::~Littletool()
{
    delete ui;
}

 void Littletool::ReciMain()
{
    this->show();

}

void Littletool::on_pushButton_clicked()
{
    QUrl url("https://wantquotes.net");
    QDesktopServices::openUrl(url);
}


void Littletool::on_pushButton_2_clicked()
{
    QUrl url("https://zh.wikipedia.org/zh-sg");
    QDesktopServices::openUrl(url);
}





void Littletool::on_pushButton_3_clicked()
{    QUrl url("https://tome.app");
    QDesktopServices::openUrl(url);

}


void Littletool::on_pushButton_4_clicked()
{
    this->hide();
    emit goback();
}


void Littletool::on_pushButton_5_clicked()
{
    QUrl url("https://scholar.google.com/");
    QDesktopServices::openUrl(url);

}


void Littletool::on_pushButton_6_clicked()
{
    QUrl url("https://www.chaonengsou.com/");
    QDesktopServices::openUrl(url);
}


void Littletool::on_pushButton_7_clicked()
{
    QUrl url("https://www.pexels.com/search/pixel/");
    QDesktopServices::openUrl(url);

}

