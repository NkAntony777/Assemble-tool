
#include "Physics.h"
#include<ui_Physics.h>
#include<QWidget>
#include<QProcess>
#include<QFileDialog>
#include<QDebug>
#include<QDesktopServices>
#include<QMessageBox>
Physics::Physics(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Physics)
{
    ui->setupUi(this);

};


    Physics::~Physics()
{
    delete ui;
}

void Physics::on_wuliButton_clicked()
{
    QUrl folderUrl = QUrl::fromLocalFile("C:\\Users\\Anthony\\source\\repos\\物理不确定度\\物理不确定度\\x64\\Debug"); // 创建一个表示C盘根目录的QUrl对象

    bool result = QDesktopServices::openUrl(folderUrl); // 打开文件夹

    if (result) {
        qDebug() << "Folder opened successfully.";
    } else {
        qDebug() << "Failed to open folder.";
    }
}

void Physics::showPhysics()
{
    this->show();

}


void Physics::on_backbutton_clicked()
{
    this->hide();
    emit gobackMain();
}


void Physics::on_ExitButton_clicked()
{
    QMessageBox msgBox;

    msgBox.setInformativeText("确认离开程序吗？");
    msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::Cancel);
    int ret = msgBox.exec();
    switch (ret) {
    case QMessageBox::Yes:
        QApplication::quit();
        break;

    case QMessageBox::Cancel:
        // Cancel was clicked
        break;

    }
}


void Physics::on_twoBUtton_clicked()
{
    QUrl folderUrl = QUrl::fromLocalFile("C:\\Users\\Anthony\\source\\repos\\最小二乘法\\x64\\Debug"); // 创建一个表示C盘根目录的QUrl对象

        bool result = QDesktopServices::openUrl(folderUrl); // 打开文件夹

        if (result) {
            qDebug() << "Folder opened successfully.";
        } else {
            qDebug() << "Failed to open folder.";
        }
}


void Physics::on_pushButton_clicked()
{
        QUrl url("https://www.latexlive.com");
        QDesktopServices::openUrl(url);
}



void Physics::on_pushButton_2_clicked()
{
        QUrl url("https://ChatHave.com");
        QDesktopServices::openUrl(url);
}

