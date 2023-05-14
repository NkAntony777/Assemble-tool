
#ifndef AST_H
#define AST_H

#include <QMainWindow>
#include<QUrl>


QT_BEGIN_NAMESPACE
namespace Ui { class ast; }
QT_END_NAMESPACE

class ast : public QMainWindow

{
    Q_OBJECT

public:
    ast(QWidget *parent = nullptr);
    ~ast();

private slots:
    void on_EnglishButton_clicked();
    void recieveSFEback();
    void on_pushButton_clicked();

signals:
    void gotoEnglish();
private:
    Ui::ast *ui;



};
#endif // AST_H
