#include <iostream>
#include "pelicula.h"

int main() {
    const int MAX_PELICULAS = 100;
    Pelicula peliculas[MAX_PELICULAS];
    int numPeliculas = 0;

    while (true) {
        std::cout << "1. Ingresar una nueva película\n";
        std::cout << "2. Salir\n";
        std::cout << "Ingrese una opción: ";
        int opcion;
        std::cin >> opcion;

        if (opcion == 1) {
            if (numPeliculas >= MAX_PELICULAS) {
                std::cout << "No se pueden ingresar más películas.\n";
                continue;
            }
            std::string nombre, director, genero;
            int anioLanzamiento, horas, minutos, segundos;
            std::cout << "Ingrese el nombre de la película: ";
            std::cin >> nombre;
            std::cout << "Ingrese el director de la película: ";
            std::cin >> director;
            std::cout << "Ingrese el año de lanzamiento de la película: ";
            std::cin >> anioLanzamiento;
            std::cout << "Ingrese el género de la película: ";
            std::cin >> genero;
            std::cout << "Ingrese la duración de la película (horas minutos segundos): ";
            std::cin >> horas >> minutos >> segundos;
            Duracion duracion(horas, minutos, segundos);
            Pelicula pelicula(nombre, director, anioLanzamiento, genero, duracion);
            peliculas[numPeliculas] = pelicula;
            numPeliculas++;
            std::cout << "Película ingresada con éxito.\n";
        } else if (opcion == 2) {
            break;
        } else {
            std::cout << "Opción no reconocida.\n";
        }
    }

    return 0;
}






// {
    //Codificador codificador;
    //std::string operacion, archivoOrigen, archivoFinal, archivoCodigo;
    //std::cout << "Ingrese la operacion (codificar/descodificar): ";
    //std::cin >> operacion;
    //std::cout << "Ingrese la ubicacion y nombre del archivo origen: ";
    //std::cin >> archivoOrigen;
    //std::cout << "Ingrese la ubicacion y nombre del archivo final: ";
    //std::cin >> archivoFinal;
    //std::cout << "¿Desea usar un documento para la codificacion? (s/n): ";
    //char respuesta;
    //std::cin >> respuesta;
    //if (respuesta == 's') {
      //  std::cout << "Ingrese la ubicacion y nombre del documento de codificacion: ";
      // std::cin >> archivoCodigo;
   // }
  //  if (operacion == "codificar") {
   //     codificador.codificar(archivoOrigen, archivoFinal, archivoCodigo);
   // } else if (operacion == "decodificar") {
   //     codificador.decodificar(archivoOrigen, archivoFinal, archivoCodigo);
   // } else {
   //     std::cout << "Operacion no reconocida.\n";
   // }
   // return 0;
//}
