#include "fish.h"
#include <QWidget>
#include<ui_fish.h>
#include<QUrl>
#include<QDesktopServices>
fish::fish(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::fish)
{
    ui->setupUi(this);


};

fish::~fish()
{
    delete ui;
}

void fish::on_pushButton_clicked()
{
    QUrl url("https://subhd.tv/");
    QDesktopServices::openUrl(url);
}


void fish::on_pushButton_2_clicked()
{
    QUrl url("https://theuselessweb.com/");
    QDesktopServices::openUrl(url);
}


void fish::on_pushButton_3_clicked()
{
    this->hide();
    emit backtoomain();
}



void fish::showfish()
{
    this->show();

}

void fish::on_pushButton_4_clicked()
{
    QUrl url("https://poki.cn/");
    QDesktopServices::openUrl(url);
}

