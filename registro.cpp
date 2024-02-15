#include "registro.h"
#include "ui_registro.h"
#include <QStandardItem>
#include <QColor>

Registro::Registro(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Registro)
{
    ui->setupUi(this);
    ui->tblCuadroNot->setColumnCount(6);
    QStringList titulo;
    titulo << tr("Nombre") /*<< tr("Apellido")*/ << tr("Nota 1") << tr("Nota 2") << tr("Nota Final") << tr("Estado") << tr("Nota Min");
    ui->tblCuadroNot->setHorizontalHeaderLabels(titulo);
    cargar();
}

Registro::~Registro()
{
    delete ui;
}
void Registro::actualizarTabla()
{
    ui->tblCuadroNot->clearContents();
    ui->tblCuadroNot->setRowCount(0);

    foreach (Modelo *modelo, modelosIngresados)
    {
        float notaFinal = controlador.notaFinal(modelo);
        float notaMin = controlador.notaMin(modelo);
        QString estado = controlador.estado(modelo);

        int fila = ui->tblCuadroNot->rowCount();
        ui->tblCuadroNot->insertRow(fila);

        ui->tblCuadroNot->setItem(fila, 0, new QTableWidgetItem(modelo->nombre()));
        //ui->tblCuadroNot->setItem(fila, 1, new QTableWidgetItem(modelo->apellido()));
        ui->tblCuadroNot->setItem(fila, 1, new QTableWidgetItem(QString::number(modelo->nota1())));
        ui->tblCuadroNot->setItem(fila, 2, new QTableWidgetItem(QString::number(modelo->nota2())));
        ui->tblCuadroNot->setItem(fila, 3, new QTableWidgetItem(QString::number(notaFinal)));

        QTableWidgetItem *itemEstado = new QTableWidgetItem(estado);

        // Configurar el color de fondo según el estado
        if (estado == "Aprobado")
        {
            itemEstado->setBackground(QColor(Qt::green));
        }
        else if (estado == "Remedial")
        {
            itemEstado->setBackground(QColor(Qt::red));
        }

        // Añadir el QTableWidgetItem a la tabla
        ui->tblCuadroNot->setItem(fila, 4, itemEstado);

        if (notaFinal < 70 && notaFinal > 25)
        {
            ui->tblCuadroNot->setItem(fila, 5, new QTableWidgetItem(QString::number(notaMin)));
        }
        else if (notaFinal < 25)
        {
            ui->tblCuadroNot->setItem(fila, 5, new QTableWidgetItem(tr("Nota muy baja")));
        }
    }
}
void Registro::guardar()
{
    QString rutaArchivo = QFileDialog::getSaveFileName(this, tr("Guardar Datos"), QDir::homePath(), tr("Archivos CSV (*.csv)"));

    if(!rutaArchivo.isEmpty())
    {
        QFile archivo(rutaArchivo);

        if (archivo.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            QTextStream salida(&archivo);

            // Escribir encabezados
            salida << tr("Nombre,Nota1,Nota2,NotaFinal,Estado\n");

            // Escribir datos
            foreach (Modelo *modelo, modelosIngresados)
            {
                float notaFinal = controlador.notaFinal(modelo);
                QString estado = controlador.estado(modelo);

                salida << modelo->nombre() << ","
                       //<< modelo->apellido() << ","
                       << modelo->nota1() << ","
                       << modelo->nota2() << ","
                       << notaFinal << ","
                       << estado << "\n";
            }

            archivo.close();
        }
        else
        {
            QMessageBox::warning(this, tr("Guardar"), tr("No se pudo guardar los datos"));
        }
    }

}

void Registro::cargar()
{
    QString rutaArchivo = QFileDialog::getOpenFileName(this, tr("Cargar Datos"), QDir::homePath(), tr("Archivos CSV (*.csv)"));

    if (!rutaArchivo.isEmpty())
    {
        QFile archivo(rutaArchivo);

        if (archivo.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            QTextStream entrada(&archivo);
            entrada.readLine(); // Leer la primera línea (encabezados) y descartarla
            modelosIngresados.clear();

            while (!entrada.atEnd())
            {
                QString linea = entrada.readLine();
                QStringList campos = linea.split(',');

                if (campos.size() == 5)
                {
                    QString nombre = campos[0];
                    int nota1 = campos[1].toInt();
                    int nota2 = campos[2].toInt();
                    float notaFinal = campos[3].toFloat();
                    QString estado = campos[4];

                    Modelo *modelo = new Modelo(nombre, nota1, nota2);
                    modelosIngresados.append(modelo);
                }
            }

            actualizarTabla();
            archivo.close();
        }
        else
        {
            QMessageBox::warning(this, tr("Cargar"), tr("No se pudo cargar los datos"));
        }
    }
}
void Registro::manejarDatosIngresados(Modelo *modelo)
{
    modelosIngresados.append(modelo);
    actualizarTabla();
    // guardar();
}


void Registro::on_actionIngreso_Estudiante_triggered()
{
    IngresoForm *w = new IngresoForm(this);
    connect(w, &IngresoForm::datosIngresados, this, &Registro::manejarDatosIngresados);

    w->show();
}


void Registro::on_actionRepositorio_triggered()
{
    AcercaDeForm *w = new AcercaDeForm(this);

    w->show();
}


void Registro::on_pushButton_released()
{
    guardar();
}


void Registro::on_actionSalir_triggered()
{
    int opcion = QMessageBox::question(this, tr("Salir del programa"), tr("¿Desea salir del programa?"), QMessageBox::Yes | QMessageBox::No);
    if(opcion == QMessageBox::Yes)
    {
        qApp->quit();
    }
}


void Registro::on_pushButton_2_clicked()
{
    cargar();
}

