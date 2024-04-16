#include <iostream>
#include <fstream>
#include <map>
#include <string>

class BuscadorTexto {
private:
    std::map<std::string, int> conteos;
    std::string objetivo;

public:
    BuscadorTexto(const std::string& obj);
    void buscar();
    void guardarResultados();
};
