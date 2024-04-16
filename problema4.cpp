#include <iostream>
#include "Codificador.h"

void problema4() {
    Codificador codificador;
    std::string archivoOrigen = "C:/Users/Andru/Documents/mensaje.txt";
    std::string archivoDestino = "C:/Users/Andru/Documents/mensaje_codificado.txt";
    std::string documento;
    char opcion;
    bool usarDocumento;

    std::cout << "¿Desea utilizar un documento para codificar/decodificar? (s/n): ";
    std::cin >> opcion;

    if (opcion == 's' || opcion == 'S') {
        usarDocumento = true;
        std::cout << "Ingrese la ubicacion y nombre del documento: ";
        std::cin >> documento;
    } else {
        usarDocumento = false;
    }

    std::cout << "¿Desea codificar (C) o decodificar (D) el mensaje? ";
    std::cin >> opcion;

    if (opcion == 'C' || opcion == 'c') {
        codificador.codificarMensaje(archivoOrigen, archivoDestino, usarDocumento, documento);
    } else if (opcion == 'D' || opcion == 'd') {
        codificador.decodificarMensaje(archivoOrigen, archivoDestino, usarDocumento, documento);
    } else {
        std::cerr << "Opcion no valida." << std::endl;
    }
}



