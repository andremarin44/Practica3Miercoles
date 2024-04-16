#include "Codificador.h"
#include <iostream>

void problema4() {
    Codificador codificador;
    std::string operacion, rutaArchivoOrigen, rutaArchivoFinal, rutaArchivoCodigo;

    std::cout << "¿Deseas codificar o decodificar un mensaje? (codificar/decodificar): ";
    std::cin >> operacion;

    std::cout << "Por favor, proporciona la ubicacion y nombre del archivo origen: ";
    std::cin >> rutaArchivoOrigen;

    std::cout << "Por favor, proporciona la ubicacion y nombre del archivo final: ";
    std::cin >> rutaArchivoFinal;

    std::cout << "¿Deseas usar la codificacion por defecto o por documento? (defecto/documento): ";
    std::string opcion;
    std::cin >> opcion;

    if (opcion == "documento") {
        std::cout << "Por favor, proporciona la ubicacion y nombre del documento de codificacion: ";
        std::cin >> rutaArchivoCodigo;
    }

    if (operacion == "codificar") {
        std::cout << codificador.codificar(rutaArchivoOrigen, rutaArchivoFinal, rutaArchivoCodigo) << std::endl;
    } else if (operacion == "decodificar") {
        std::cout << codificador.decodificar(rutaArchivoOrigen, rutaArchivoFinal, rutaArchivoCodigo) << std::endl;
    } else {
        std::cout << "Operación no reconocida." << std::endl;
    }
}
