#ifndef CODIFICADOR_H
#define CODIFICADOR_H

#include <iostream>
#include <fstream>
#include <unordered_map>
#include <string>

class Codificador {
public:
    void codificarMensaje(const std::string& archivoOrigen, const std::string& archivoDestino, bool usarDocumento = false, const std::string& documento = "");
    void decodificarMensaje(const std::string& archivoOrigen, const std::string& archivoDestino, bool usarDocumento = false, const std::string& documento = "");

private:
    std::unordered_map<char, char> obtenerMapaCodificacion(const std::string& documento);
};

#endif // CODIFICADOR_H
