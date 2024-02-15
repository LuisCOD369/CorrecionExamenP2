/********************************************************************************
** Form generated from reading UI file 'acercadeform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ACERCADEFORM_H
#define UI_ACERCADEFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AcercaDeForm
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;

    void setupUi(QWidget *AcercaDeForm)
    {
        if (AcercaDeForm->objectName().isEmpty())
            AcercaDeForm->setObjectName(QString::fromUtf8("AcercaDeForm"));
        AcercaDeForm->resize(241, 87);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/github.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AcercaDeForm->setWindowIcon(icon);
        AcercaDeForm->setStyleSheet(QString::fromUtf8("background-color: rgb(74, 66, 65);\n"
"color: rgb(255, 255, 255);"));
        gridLayout = new QGridLayout(AcercaDeForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(AcercaDeForm);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 1, 1, 2);

        label_2 = new QLabel(AcercaDeForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 1, 1, 2);

        label_3 = new QLabel(AcercaDeForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(AcercaDeForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);


        retranslateUi(AcercaDeForm);

        QMetaObject::connectSlotsByName(AcercaDeForm);
    } // setupUi

    void retranslateUi(QWidget *AcercaDeForm)
    {
        AcercaDeForm->setWindowTitle(QApplication::translate("AcercaDeForm", "Creditos", nullptr));
        pushButton->setText(QApplication::translate("AcercaDeForm", "GitHub", nullptr));
        label_2->setText(QApplication::translate("AcercaDeForm", "Pillajo Luis", nullptr));
        label_3->setText(QApplication::translate("AcercaDeForm", "Enlace de GitHub:", nullptr));
        label->setText(QApplication::translate("AcercaDeForm", "Estudiante:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AcercaDeForm: public Ui_AcercaDeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ACERCADEFORM_H
