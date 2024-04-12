#include "buscador.h"
#include <fstream>
#include <sstream>

Buscador::Buscador(std::string archivoOrigen, std::string archivoFinal)
    : archivoOrigen(archivoOrigen), archivoFinal(archivoFinal) {}

void Buscador::buscar(std::vector<std::string> busquedas) {
    std::map<std::string, int> conteo = contar(busquedas);
    std::ofstream salida(archivoFinal);
    for (const auto& busqueda : busquedas) {
        salida << "La secuencia \"" << busqueda << "\" se repite "
               << conteo[busqueda] << " veces en el texto.\n";
    }
    salida.close();
}

std::map<std::string, int> Buscador::contar(std::vector<std::string> busquedas) {
    std::map<std::string, int> conteo;
    for (const auto& busqueda : busquedas) {
        conteo[busqueda] = 0;
    }
    std::ifstream entrada(archivoOrigen);
    std::string linea;
    while (std::getline(entrada, linea)) {
        for (const auto& busqueda : busquedas) {
            std::size_t pos = 0;
            while ((pos = linea.find(busqueda, pos)) != std::string::npos) {
                conteo[busqueda]++;
                pos += busqueda.length();
            }
        }
    }
    entrada.close();
    return conteo;
}

