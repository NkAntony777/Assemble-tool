
#ifndef SECONDWIDGETEBOOK_H
#define SECONDWIDGETEBOOK_H



#include <QDialog>

namespace Ui {
class secondwidgetebook;
}

class secondwidgetebook : public QDialog
{
    Q_OBJECT

public:
    explicit secondwidgetebook(QWidget *parent = nullptr);
    ~secondwidgetebook();

private slots:
    void on_jiumoButton_clicked();

    void on_PDFDriveButton_clicked();

    void on_SButton_clicked();

    void on_ZLibrarypushButton_clicked();

    void on_LGButton_clicked();

    void on_GooSchButton_clicked();

    void on_pushButton_clicked();
signals:

    void GM();
private:
    Ui::secondwidgetebook *ui;
};

#endif // SECONDWIDGETEBOOK_H
