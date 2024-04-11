#ifndef CODIFICADOR_H
#define CODIFICADOR_H

#include <string>
#include <map>

class Codificador {
public:
    Codificador();
    void codificar(std::string archivoOrigen, std::string archivoFinal, std::string archivoCodigo = "");
    void decodificar(std::string archivoOrigen, std::string archivoFinal, std::string archivoCodigo = "");
private:
    std::map<char, char> codigo;
};

#endif // CODIFICADOR_H
