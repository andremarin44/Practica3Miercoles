#include <iostream>
#include "Codificador.h"

int main() {
    Codificador codificador;
    std::string operacion, archivoOrigen, archivoFinal, archivoCodigo;
    std::cout << "Ingrese la operacion (codificar/descodificar): ";
    std::cin >> operacion;
    std::cout << "Ingrese la ubicacion y nombre del archivo origen: ";
    std::cin >> archivoOrigen;
    std::cout << "Ingrese la ubicacion y nombre del archivo final: ";
    std::cin >> archivoFinal;
    std::cout << "¿Desea usar un documento para la codificacion? (s/n): ";
    char respuesta;
    std::cin >> respuesta;
    if (respuesta == 's') {
        std::cout << "Ingrese la ubicacion y nombre del documento de codificacion: ";
        std::cin >> archivoCodigo;
    }
    if (operacion == "codificar") {
        codificador.codificar(archivoOrigen, archivoFinal, archivoCodigo);
    } else if (operacion == "decodificar") {
        codificador.decodificar(archivoOrigen, archivoFinal, archivoCodigo);
    } else {
        std::cout << "Operacion no reconocida.\n";
    }
    return 0;
}
