
#include "ast.h"
#include<English.h>
#include <QApplication>
#include<Physics.h>
#include<ui_English.h>
#include<secondwidgetebook.h>
#include<Littletool.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    English Englishpage;
    ast Mainpage;
    Physics Physicspage;
    secondwidgetebook sec;
    Littletool Littlepage;
    Englishpage.setWindowTitle("英语");
    Physicspage.setWindowTitle("物理");
    sec.setWindowTitle("Ebook");
    sec.resize(120,160);
    Englishpage.show();


    //按下英语的按钮，跳转到英语界面
    QObject::connect(&Mainpage,&ast::gotoEnglish,&Englishpage,&English::SFMgotoEnglish);

//按下英语界面的返回，返回到主界面
    QObject::connect(&Englishpage,SIGNAL(backtomain()),&Mainpage,SLOT(recieveSFEback()));



    QObject::connect(&Mainpage,SIGNAL(gotoPhysics()),&Physicspage,SLOT(showPhysics()));

    QObject::connect(&Physicspage,SIGNAL(gobackMain()),&Mainpage,SLOT(recieveSFFback()));

    QObject::connect(&Mainpage,SIGNAL(gotoLitt()),&Littlepage,SLOT(ReciMain()));

    QObject::connect(&Littlepage,SIGNAL(goback()),&Mainpage,SLOT(recilb()));

    QObject::connect(&sec,SIGNAL(GM()),&Mainpage,SLOT(recisec()));
    ast w;
    w.show();
    return a.exec();

}
