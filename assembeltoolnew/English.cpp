
#include<ui_English.h>
#include<QMessageBox>
#include <English.h>
#include<QDesktopServices>
#include<QUrl>
#include<QProcess>
#include <QPushButton>
#include<QtWebView/QtWebView>
#include<QtWebView/qtwebviewfunctions.h>
English::English(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::English)
{
    ui->setupUi(this);
    QtWebView *webView = new QWebView();
    webView->setFixedSize(800, 600);

    QPushButton *button = new QPushButton("Open website");
    connect(button, &QPushButton::clicked, [=]() {
        webView->load(QUrl("https://www.example.com"));});
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


void English::on_recitebutton_clicked()
{
    QProcess::startDetached("D:\\office32.zh-cn\\SakuraCat\\SakuraCat.exe");

}

