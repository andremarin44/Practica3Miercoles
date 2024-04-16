#include "BuscadorTexto.h"

void problema3() {
    std::string objetivo;
    std::cout << "Introduce la secuencia de texto a buscar: ";
    std::cin >> objetivo;

    BuscadorTexto buscador(objetivo);
    buscador.buscar();
    buscador.guardarResultados();

}
