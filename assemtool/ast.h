
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

    void recieveSFFback();
    void on_pushButton_3_clicked();

signals:
    void gotoEnglish();
    void gotoPhysics();

private:
    Ui::ast *ui;



};
#endif // AST_H
