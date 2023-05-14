
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

void ast::on_pushButton_clicked()
{

    this->hide();
    emit gotoEnglish();
}

