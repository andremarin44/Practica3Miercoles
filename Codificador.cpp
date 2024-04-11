#include "Codificador.h"
#include <fstream>

Codificador::Codificador() {}

void Codificador::codificar(std::string archivoOrigen, std::string archivoFinal, std::string archivoCodigo) {
    std::ifstream entrada(archivoOrigen);
    std::ofstream salida(archivoFinal);
    if (archivoCodigo != "") {
        std::ifstream codigos(archivoCodigo);
        char original, codificado;
        while (codigos >> original >> codificado) {
            codigo[original] = codificado;
        }
        codigos.close();
    }
    char c;
    while (entrada.get(c)) {
        if (codigo.count(c) > 0) {
            salida << codigo[c];
        } else {
            salida << c;
        }
    }
    entrada.close();
    salida.close();
}

void Codificador::decodificar(std::string archivoOrigen, std::string archivoFinal, std::string archivoCodigo) {
    std::ifstream entrada(archivoOrigen);
    std::ofstream salida(archivoFinal);
    if (archivoCodigo != "") {
        std::ifstream codigos(archivoCodigo);
        char original, codificado;
        while (codigos >> original >> codificado) {
            codigo[codificado] = original;
        }
        codigos.close();
    }
    char c;
    while (entrada.get(c)) {
        if (codigo.count(c) > 0) {
            salida << codigo[c];
        } else {
            salida << c;
        }
    }
    entrada.close();
    salida.close();
}
