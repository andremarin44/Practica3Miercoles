#ifndef BUSCADOR_H
#define BUSCADOR_H

#include <string>
#include <vector>
#include <map>

class Buscador {
public:
    Buscador(std::string archivoOrigen, std::string archivoFinal);
    void buscar(std::vector<std::string> busquedas);
private:
    std::string archivoOrigen;
    std::string archivoFinal;
    std::map<std::string, int> contar(std::vector<std::string> busquedas);
};

#endif // BUSCADOR_H
