#ifndef CODIFICADOR_H
#define CODIFICADOR_H

#include <string>
#include <fstream>
#include <map>

class Codificador {
public:
    Codificador();
    std::string codificar(const std::string &rutaArchivoOrigen, const std::string &rutaArchivoFinal, const std::string &rutaArchivoCodigo);
    std::string decodificar(const std::string &rutaArchivoOrigen, const std::string &rutaArchivoFinal, const std::string &rutaArchivoCodigo);
private:
    std::map<char, char> cargarCodigo(const std::string &rutaArchivoCodigo);
};

#endif

