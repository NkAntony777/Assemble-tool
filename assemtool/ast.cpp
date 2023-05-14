
#include "ast.h"
#include "ui_ast.h"
#include <English.h>

ast::ast(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::ast)
{
    ui->setupUi(this);

}

ast::~ast()
{
    delete ui;
}



void ast::on_EnglishButton_clicked()
{
    this->hide();
    emit gotoEnglish();
}

void ast::recieveSFEback()
{
    this->show();
}



void ast::recieveSFFback()
{
    this->show();
}



void ast::on_pushButton_3_clicked()
{
    this->hide();
    emit gotoPhysics();
}


void ast::on_littletool_clicked()
{
    this->hide();
    emit gotoLitt();
}

void ast::recilb()
{

    this->show();
}


void ast::recisec()
{
    this->show();

}
void ast::refi()
{
    this->show();
}
void ast::on_littletool_2_clicked()
{
    this->hide();
    emit gotofi();
}

