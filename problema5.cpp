#include <iostream>
#include "Pelicula.h"

#define MAX_PELICULAS 100

void problema5() {
    Pelicula* peliculas[MAX_PELICULAS];
    int numPeliculas = 0;

    int opcion;
    do {
        std::cout << "1. Ingresar nueva película\n";
        std::cout << "2. Eliminar película\n";
        std::cout << "3. Ordenar películas\n";
        std::cout << "4. Cambiar atributo de película\n";
        std::cout << "5. Imprimir lista de películas\n";
        std::cout << "6. Guardar información en archivo de texto\n";
        std::cout << "7. Cargar información de archivo de texto\n";
        std::cout << "8. Salir\n";
        std::cout << "Ingrese una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:

                break;
            case 2:

                break;
            case 3:

                break;
            case 4:

                break;
            case 5:

                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opción no válida. Por favor, intente de nuevo.\n";
                break;
        }
    } while (opcion != 8);

 }
