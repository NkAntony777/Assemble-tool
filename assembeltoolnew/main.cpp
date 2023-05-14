
#include "ast.h"
#include<English.h>
#include <QApplication>

#include<ui_English.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    English Englishpage;
    ast Mainpage;
    Englishpage.setWindowTitle("英语");
    Englishpage.setFixedSize(480,750);
    Englishpage.show();
    ast w;
    w.show();

    //按下英语的按钮，跳转到英语界面
    QObject::connect(&Mainpage,&ast::gotoEnglish,&Englishpage,&English::SFMgotoEnglish);

    //按下英语界面的返回，返回到主界面
    QObject::connect(&Englishpage,SIGNAL(backtomain()),&Mainpage,SLOT(recieveSFEback()));

    QObject::connect(&Englishpage,SIGNAL(click()),&Englishpage,SLOT(gotonetai()));






    return a.exec();

}
