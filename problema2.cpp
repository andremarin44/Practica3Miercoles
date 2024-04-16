// main.cpp
#include "Archivo.h"

void problema2() {
    Archivo archivo;
    std::string nombreArchivo, opcion;

    std::cout << "Ingrese el nombre del archivo (incluyendo la extension .txt): ";
    std::cin >> nombreArchivo;

    std::cout << "¿Desea escribir (E) o leer (L) el archivo? ";
    std::cin >> opcion;

    if (opcion == "E" || opcion == "e") {
        archivo.escribirArchivo(nombreArchivo);
    } else if (opcion == "L" || opcion == "l") {
        archivo.leerArchivo(nombreArchivo);
    } else {
        std::cout << "Opcion no valida." << std::endl;
    }
}


