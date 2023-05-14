#ifndef FISH_H
#define FISH_H
#include <QWidget>
namespace Ui { class fish; }
class fish :public QWidget
{
    Q_OBJECT

public:
    explicit fish(QWidget *parent=0);

    ~fish();

    void paintevent(QPaintEvent*event);
private slots:
    void on_pushButton_clicked();
    void showfish();
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();

signals:
    void backtoomain();
private:
    Ui::fish *ui;
};

#endif // FISH_H
