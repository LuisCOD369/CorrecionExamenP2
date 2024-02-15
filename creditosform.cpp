#include "creditosform.h"
#include "ui_acercadeform.h"

AcercaDeForm::AcercaDeForm(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AcercaDeForm)
{
    ui->setupUi(this);
}

AcercaDeForm::~AcercaDeForm()
{
    delete ui;
}

void AcercaDeForm::on_pushButton_released()
{
    QString URL = "https://github.com/LuisCOD369";

    QDesktopServices::openUrl(QUrl(URL));
}


