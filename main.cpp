#include "registro.h"
#include <modelo.h>
#include <registro.h>

#include <QApplication>
#include <QDebug>
#include <QTranslator>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QTranslator traduccion;
    QStringList idiomas;
    idiomas << "Spanish" <<"Italian"<<"Potugues";

    QString idiomaSeleccionado = QInputDialog::getItem(NULL,
                               "language",
                               "Select an Lenguage",
                               idiomas);
    if(idiomaSeleccionado=="Italian"){
        traduccion.load(":/italiano.qm");
    }else
    if(idiomaSeleccionado != "Portugues"){
        traduccion.load(":/portugues.qm");

    }
    if (idiomaSeleccionado != "Spanish"){
        a.installTranslator(&traduccion);

    }
    a.setStyle("fusion");

    Registro w;
    w.show();
    return a.exec();
}
