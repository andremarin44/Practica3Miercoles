#include "Archivo.h"
#include <fstream>
#include <sstream>

Archivo::Archivo(std::string ubicacion) : ubicacion(ubicacion) {}

void Archivo::escribir(std::string texto) {
    std::ofstream salida(ubicacion, std::ios::app);
    if (!salida) {
        std::cerr << "No se pudo abrir el archivo para escribir.\n";
        return;
    }
    salida << texto << "\n";
    salida.close();
}

std::string Archivo::leer() {
    std::ifstream entrada(ubicacion);
    if (!entrada) {
        std::cerr << "No se pudo abrir el archivo para leer.\n";
        return "";
    }
    std::stringstream buffer;
    buffer << entrada.rdbuf();
    entrada.close();
    return buffer.str();
}

