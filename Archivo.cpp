#include "Archivo.h"

void Archivo::escribirArchivo(const std::string& nombreArchivo) {
    std::ofstream archivo(nombreArchivo, std::ios::app); // Abre el archivo para escribir al final

    if (!archivo.is_open()) {
        std::cout << "No se pudo abrir el archivo." << std::endl;
        return;
    }

    std::string texto;
    char opcion;

    do {
        std::cout << "Ingrese el texto a guardar en el archivo (terminar con una linea vacia(enter)):" << std::endl;
        std::getline(std::cin, texto);

        archivo << texto << std::endl;

        std::cout << "¿Desea escribir mas texto en el archivo? (s/n): ";
        std::cin >> opcion;
        std::cin.ignore();
    } while (opcion == 's' || opcion == 'S');

    archivo.close();
}

void Archivo::leerArchivo(const std::string& nombreArchivo) {
    std::ifstream archivo(nombreArchivo);

    if (!archivo.is_open()) {
        std::cout << "No se pudo abrir el archivo." << std::endl;
        return;
    }

    std::string linea;

    while (std::getline(archivo, linea)) {
        std::cout << linea << std::endl;
    }

    archivo.close();
}
