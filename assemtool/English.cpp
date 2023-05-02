
#include<ui_English.h>
#include<QMessageBox>
#include <English.h>
#include<QDesktopServices>
#include<QUrl>
#include<QProcess>
#include <QPushButton>
#include<secondwidgetebook.h>
#include<QPainter>
#include<QStyleOption>
#include<QMainWindow>





English::English(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::English)
{
    ui->setupUi(this);


};

English::~English()
{
    delete ui;
}

void English::SFMgotoEnglish()
{

    this->show();

}

void English::on_backbutton_clicked()
{
    this->hide();
    emit backtomain();
}





void English::on_exitbutton_clicked()
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




void English::on_Chatgptbutton_clicked()
{
    QProcess::startDetached("D:\\office32.zh-cn\\SakuraCat\\SakuraCat.exe");
    QUrl url("https://chat.openai.com/");
    QDesktopServices::openUrl(url);
}


void English::on_VPNbutton_clicked()
{
    QProcess::startDetached("D:\\office32.zh-cn\\SakuraCat\\SakuraCat.exe");

}





void English::on_bingchatbutton_clicked()
{

    QUrl url("https://www.bing.com/search?q=Bing+AI&showconv=1&FORM=hpcodx");
       QDesktopServices::openUrl(url);
}


void English::on_ebook_clicked()
{
       secondwidgetebook *secondwindow=  new secondwidgetebook(this);

       secondwindow->resize(400,600);



       secondwindow->show();

       secondwindow->raise();
}


void English::on_pushButton_clicked()
{
       QUrl url("https://www.oxfordlearnersdictionaries.com/us");
       QDesktopServices::openUrl(url);
}


void English::on_pushButton_2_clicked()
{
       QUrl url("https://www.ted.com");
       QDesktopServices::openUrl(url);
}

