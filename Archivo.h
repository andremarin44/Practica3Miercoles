#ifndef ARCHIVO_H
#define ARCHIVO_H

#include <string>

class Archivo {
public:
    Archivo(std::string ubicacion);
    void escribir(std::string texto);
    std::string leer();
private:
    std::string ubicacion;
};

#endif // ARCHIVO_H
