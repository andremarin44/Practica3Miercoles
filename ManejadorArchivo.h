#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <iostream>
#include <fstream>
#include <string>

class Archivo {
public:
    void escribirArchivo(const std::string& nombreArchivo);
    void leerArchivo(const std::string& nombreArchivo);
};

#endif // ARCHIVO_H

