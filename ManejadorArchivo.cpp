// archivo.cpp
#include "archivo.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>

Archivo::Archivo(const QString& ruta) : rutaArchivo(ruta) {}

Archivo::~Archivo() {}

bool Archivo::escribir(const QString& texto) {
    QFile archivo(rutaArchivo);
    if (!archivo.open(QIODevice::Append | QIODevice::Text)) {
        qDebug() << "Error al abrir el archivo para escritura";
        return false;
    }

    QTextStream out(&archivo);
    out << texto << "\n";
    archivo.close();
    return true;
}

QString Archivo::leer() {
    QFile archivo(rutaArchivo);
    if (!archivo.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error al abrir el archivo para lectura";
        return "";
    }

    QTextStream in(&archivo);
    QString contenido = in.readAll();
    archivo.close();
    return contenido;
}


