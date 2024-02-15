#ifndef CREDITOSFORM_H
#define CREDITOSFORM_H

#include <QWidget>
#include <QUrl>
#include <QDesktopServices>
#include <QDialog>

#include <QString>

namespace Ui {
class AcercaDeForm;
}

class AcercaDeForm : public QDialog
{
    Q_OBJECT

public:
    explicit AcercaDeForm(QWidget *parent = nullptr);
    ~AcercaDeForm();

private slots:
    void on_pushButton_released();

private:
    Ui::AcercaDeForm *ui;
};

#endif // CREDITOSFORM_H
