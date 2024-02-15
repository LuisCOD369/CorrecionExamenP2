/********************************************************************************
** Form generated from reading UI file 'registro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_H
#define UI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registro
{
public:
    QAction *actionIngreso_Estudiante;
    QAction *actionRepositorio;
    QAction *actionSalir;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTableWidget *tblCuadroNot;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QMenuBar *menubar;
    QMenu *menuIngreso;
    QMenu *menuAcerca_de;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Registro)
    {
        if (Registro->objectName().isEmpty())
            Registro->setObjectName(QString::fromUtf8("Registro"));
        Registro->resize(353, 335);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/boleta.ico"), QSize(), QIcon::Normal, QIcon::Off);
        Registro->setWindowIcon(icon);
        Registro->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);\n"
"background-color: rgb(249, 255, 208);\n"
""));
        actionIngreso_Estudiante = new QAction(Registro);
        actionIngreso_Estudiante->setObjectName(QString::fromUtf8("actionIngreso_Estudiante"));
        actionRepositorio = new QAction(Registro);
        actionRepositorio->setObjectName(QString::fromUtf8("actionRepositorio"));
        actionSalir = new QAction(Registro);
        actionSalir->setObjectName(QString::fromUtf8("actionSalir"));
        centralwidget = new QWidget(Registro);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tblCuadroNot = new QTableWidget(centralwidget);
        tblCuadroNot->setObjectName(QString::fromUtf8("tblCuadroNot"));

        gridLayout->addWidget(tblCuadroNot, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(251, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 2, 1, 1, 1);

        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 3, 0, 1, 1);

        Registro->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Registro);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 353, 21));
        menuIngreso = new QMenu(menubar);
        menuIngreso->setObjectName(QString::fromUtf8("menuIngreso"));
        menuAcerca_de = new QMenu(menubar);
        menuAcerca_de->setObjectName(QString::fromUtf8("menuAcerca_de"));
        Registro->setMenuBar(menubar);
        statusbar = new QStatusBar(Registro);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Registro->setStatusBar(statusbar);

        menubar->addAction(menuIngreso->menuAction());
        menubar->addAction(menuAcerca_de->menuAction());
        menuIngreso->addAction(actionIngreso_Estudiante);
        menuIngreso->addSeparator();
        menuIngreso->addAction(actionSalir);
        menuAcerca_de->addAction(actionRepositorio);

        retranslateUi(Registro);

        QMetaObject::connectSlotsByName(Registro);
    } // setupUi

    void retranslateUi(QMainWindow *Registro)
    {
        Registro->setWindowTitle(QApplication::translate("Registro", "Notas estudiantes UPS", nullptr));
        actionIngreso_Estudiante->setText(QApplication::translate("Registro", "&Ingreso Estudiante", nullptr));
#ifndef QT_NO_SHORTCUT
        actionIngreso_Estudiante->setShortcut(QApplication::translate("Registro", "Ctrl+I", nullptr));
#endif // QT_NO_SHORTCUT
        actionRepositorio->setText(QApplication::translate("Registro", "&Repositorio", nullptr));
#ifndef QT_NO_SHORTCUT
        actionRepositorio->setShortcut(QApplication::translate("Registro", "Ctrl+R", nullptr));
#endif // QT_NO_SHORTCUT
        actionSalir->setText(QApplication::translate("Registro", "Salir", nullptr));
        pushButton->setText(QApplication::translate("Registro", "Guardar", nullptr));
        pushButton_2->setText(QApplication::translate("Registro", "Cargar", nullptr));
        menuIngreso->setTitle(QApplication::translate("Registro", "Ingreso", nullptr));
        menuAcerca_de->setTitle(QApplication::translate("Registro", "Acerca de", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Registro: public Ui_Registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
