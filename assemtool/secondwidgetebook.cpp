
#include "secondwidgetebook.h"
#include<QWidget>
#include<ui_secondwidgetebook.h>
#include <QUrl>
#include<QDesktopServices>
#include<QProcess>
secondwidgetebook::secondwidgetebook(QWidget *parent)
    :
    QDialog(parent),
    ui(new Ui::secondwidgetebook)
{
    ui->setupUi(this);

}

secondwidgetebook::~secondwidgetebook()
{
    delete ui;
}

void secondwidgetebook::on_jiumoButton_clicked()
{
    QUrl url("https://www.jiumodiary.com");
    QDesktopServices::openUrl(url);
}


void secondwidgetebook::on_PDFDriveButton_clicked()
{
    QUrl url("https://pdfdrive.to");
    QDesktopServices::openUrl(url);
}


void secondwidgetebook::on_SButton_clicked()
{
    QProcess::startDetached("D:\\office32.zh-cn\\SakuraCat\\SakuraCat.exe");
}


void secondwidgetebook::on_ZLibrarypushButton_clicked()
{
    QUrl url("https://z-lib.is");
    QDesktopServices::openUrl(url);
}


void secondwidgetebook::on_LGButton_clicked()
{
    QUrl url("https://libgen.gs/index.php");
    QDesktopServices::openUrl(url);
}


void secondwidgetebook::on_GooSchButton_clicked()
{
    QUrl url("https://scholar.google.com");
    QDesktopServices::openUrl(url);
}


void secondwidgetebook::on_pushButton_clicked()
{
    this-> hide();
    emit GM();
}

