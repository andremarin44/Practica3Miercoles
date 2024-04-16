#include "BuscadorTexto.h"

BuscadorTexto::BuscadorTexto(const std::string& obj) : objetivo(obj) {}

void BuscadorTexto::buscar() {
    std::ifstream archivo("C:/Users/Andru/Documents/ejemplo.txt");
    std::string linea;
    while (std::getline(archivo, linea)) {
        size_t pos = 0;
        while ((pos = linea.find(objetivo, pos)) != std::string::npos) {
            conteos[objetivo]++;
            pos += objetivo.length();
        }
    }
}

void BuscadorTexto::guardarResultados() {
    std::ofstream archivo("C:/Users/Andru/Documents/resultados.txt");
    for (const auto& par : conteos) {
        archivo << "La secuencia '" << par.first << "' se repite " << par.second << " veces en el texto.\n";
    }
}
