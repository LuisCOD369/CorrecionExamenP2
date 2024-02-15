/********************************************************************************
** Form generated from reading UI file 'ingresoform.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INGRESOFORM_H
#define UI_INGRESOFORM_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_IngresoForm
{
public:
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label;
    QDialogButtonBox *buttonBox;
    QSpacerItem *horizontalSpacer;
    QLineEdit *editNombre;
    QSpinBox *spnNota1;
    QLabel *label_4;
    QSpinBox *spnNota2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *IngresoForm)
    {
        if (IngresoForm->objectName().isEmpty())
            IngresoForm->setObjectName(QString::fromUtf8("IngresoForm"));
        IngresoForm->resize(267, 203);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/add.ico"), QSize(), QIcon::Normal, QIcon::Off);
        IngresoForm->setWindowIcon(icon);
        IngresoForm->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 250, 197);"));
        gridLayout = new QGridLayout(IngresoForm);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(IngresoForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        label = new QLabel(IngresoForm);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        buttonBox = new QDialogButtonBox(IngresoForm);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 2, 1, 1);

        editNombre = new QLineEdit(IngresoForm);
        editNombre->setObjectName(QString::fromUtf8("editNombre"));

        gridLayout->addWidget(editNombre, 0, 1, 1, 2);

        spnNota1 = new QSpinBox(IngresoForm);
        spnNota1->setObjectName(QString::fromUtf8("spnNota1"));
        spnNota1->setMaximum(50);
        spnNota1->setDisplayIntegerBase(10);

        gridLayout->addWidget(spnNota1, 1, 1, 1, 1);

        label_4 = new QLabel(IngresoForm);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        spnNota2 = new QSpinBox(IngresoForm);
        spnNota2->setObjectName(QString::fromUtf8("spnNota2"));
        spnNota2->setMaximum(50);

        gridLayout->addWidget(spnNota2, 2, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(142, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);


        retranslateUi(IngresoForm);

        QMetaObject::connectSlotsByName(IngresoForm);
    } // setupUi

    void retranslateUi(QWidget *IngresoForm)
    {
        IngresoForm->setWindowTitle(QApplication::translate("IngresoForm", "Ingreso de estudiante", nullptr));
        label_3->setText(QApplication::translate("IngresoForm", "Parcial 1:", nullptr));
        label->setText(QApplication::translate("IngresoForm", "Nombres:", nullptr));
        label_4->setText(QApplication::translate("IngresoForm", "Parcial 2:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class IngresoForm: public Ui_IngresoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INGRESOFORM_H
