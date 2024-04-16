#include "Codificador.h"

void Codificador::codificarMensaje(const std::string& archivoOrigen, const std::string& archivoDestino, bool usarDocumento, const std::string& documento) {
    std::ifstream archivoEntrada(archivoOrigen);
    std::ofstream archivoSalida(archivoDestino);

    if (!archivoEntrada.is_open() || !archivoSalida.is_open()) {
        std::cerr << "Error al abrir los archivos de origen o destino." << std::endl;
        return;
    }

    std::unordered_map<char, char> mapaCodificacion;
    if (usarDocumento) {
        mapaCodificacion = obtenerMapaCodificacion(documento);
    } else {
        // Código de codificación personalizado
        mapaCodificacion = { {'a', 'u'}, {'j', 'h'}, {'b', 'x'}, /* Agregar más codificaciones aquí si es necesario */ };
    }

    char caracter;
    while (archivoEntrada.get(caracter)) {
        if (mapaCodificacion.find(caracter) != mapaCodificacion.end()) {
            archivoSalida << mapaCodificacion[caracter];
        } else {
            archivoSalida << caracter;
        }
    }

    archivoEntrada.close();
    archivoSalida.close();

    std::cout << "Mensaje codificado exitosamente." << std::endl;
}

void Codificador::decodificarMensaje(const std::string& archivoOrigen, const std::string& archivoDestino, bool usarDocumento, const std::string& documento) {
    codificarMensaje(archivoOrigen, archivoDestino, usarDocumento, documento); // La decodificación es igual que la codificación con el mismo documento de codificación
}

std::unordered_map<char, char> Codificador::obtenerMapaCodificacion(const std::string& documento) {
    std::ifstream archivoDocumento(documento);
    std::unordered_map<char, char> mapaCodificacion;

    if (!archivoDocumento.is_open()) {
        std::cerr << "Error al abrir el archivo de codificacion." << std::endl;
        return mapaCodificacion;
    }

    char caracter, codificado;
    while (archivoDocumento >> caracter >> codificado) {
        mapaCodificacion[caracter] = codificado;
    }

    archivoDocumento.close();
    return mapaCodificacion;
}
