#include "Codificador.h"
#include <iostream>

Codificador::Codificador() {}

std::map<char, char> Codificador::cargarCodigo(const std::string &rutaArchivoCodigo) {
    std::map<char, char> codigo;
    std::ifstream archivo(rutaArchivoCodigo);
    char clave, valor;
    while (archivo >> clave >> valor) {
        codigo[clave] = valor;
    }
    return codigo;
}

std::string Codificador::codificar(const std::string &rutaArchivoOrigen, const std::string &rutaArchivoFinal, const std::string &rutaArchivoCodigo) {
    std::map<char, char> codigo = cargarCodigo(rutaArchivoCodigo);
    std::ifstream archivoOrigen(rutaArchivoOrigen);
    std::ofstream archivoFinal(rutaArchivoFinal);
    char c;
    while (archivoOrigen.get(c)) {
        if (codigo.count(c)) {
            archivoFinal.put(codigo[c]);
        } else {
            archivoFinal.put(c);
        }
    }
    return "Mensaje codificado exitosamente.";
}

std::string Codificador::decodificar(const std::string &rutaArchivoOrigen, const std::string &rutaArchivoFinal, const std::string &rutaArchivoCodigo) {
    std::map<char, char> codigo = cargarCodigo(rutaArchivoCodigo);
    std::ifstream archivoOrigen(rutaArchivoOrigen);
    std::ofstream archivoFinal(rutaArchivoFinal);
    char c;
    while (archivoOrigen.get(c)) {
        for (auto &par : codigo) {
            if (par.second == c) {
                archivoFinal.put(par.first);
                break;
            }
        }
    }
    return "Mensaje decodificado exitosamente.";
}
