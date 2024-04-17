#include <iostream>
#include <fstream>
#include "Pelicula.h"

void imprimirPelicula(const Pelicula& pelicula) {
    std::cout << "Nombre: " << pelicula.getNombre() << std::endl;
    std::cout << "Director: " << pelicula.getDirector() << std::endl;
    std::cout << "Ano de lanzamiento: " << pelicula.getAnoLanzamiento() << std::endl;
    std::cout << "Genero: " << pelicula.getGenero() << std::endl;
    std::cout << "Duracion: " << pelicula.getDuracion().getHoras() << " horas, "
              << pelicula.getDuracion().getMinutos() << " minutos, "
              << pelicula.getDuracion().getSegundos() << " segundos" << std::endl;
    std::cout << std::endl;
}

void problema5() {

    Duracion duracion(2, 15, 30); // Duración: 2 horas, 15 minutos, 30 segundos
    Pelicula pelicula("Titanic", "James Cameron", 1997, "Drama", duracion);

    std::cout << "Informacion de la pelicula:" << std::endl;
    imprimirPelicula(pelicula);

    std::ofstream archivoSalida("peliculas.txt");
    if (archivoSalida.is_open()) {
        archivoSalida << "Nombre: " << pelicula.getNombre() << std::endl;
        archivoSalida << "Director: " << pelicula.getDirector() << std::endl;
        archivoSalida << "Ano de lanzamiento: " << pelicula.getAnoLanzamiento() << std::endl;
        archivoSalida << "Genero: " << pelicula.getGenero() << std::endl;
        archivoSalida << "Duracion: " << pelicula.getDuracion().getHoras() << " horas, "
                      << pelicula.getDuracion().getMinutos() << " minutos, "
                      << pelicula.getDuracion().getSegundos() << " segundos" << std::endl;
        archivoSalida.close();
        std::cout << "Informacion de la pelicula guardada en el archivo 'peliculas.txt'." << std::endl;
    } else {
        std::cerr << "Error al abrir el archivo 'peliculas.txt'." << std::endl;
    }
}
