#include "Pelicula.h"

// Implementación de la clase Duracion
Duracion::Duracion() : horas(0), minutos(0), segundos(0) {}

Duracion::Duracion(int horas, int minutos, int segundos) : horas(horas), minutos(minutos), segundos(segundos) {}

int Duracion::getHoras() const {
    return horas;
}

int Duracion::getMinutos() const {
    return minutos;
}

int Duracion::getSegundos() const {
    return segundos;
}

// Implementación de la clase Pelicula
Pelicula::Pelicula() {}

Pelicula::Pelicula(std::string nombre, std::string director, int anoLanzamiento, std::string genero, Duracion duracion)
    : nombre(nombre), director(director), anoLanzamiento(anoLanzamiento), genero(genero), duracion(duracion) {}

std::string Pelicula::getNombre() const {
    return nombre;
}

std::string Pelicula::getDirector() const {
    return director;
}

int Pelicula::getAnoLanzamiento() const {
    return anoLanzamiento;
}

std::string Pelicula::getGenero() const {
    return genero;
}

Duracion Pelicula::getDuracion() const {
    return duracion;
}

void Pelicula::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void Pelicula::setDirector(std::string director) {
    this->director = director;
}

void Pelicula::setAnoLanzamiento(int anoLanzamiento) {
    this->anoLanzamiento = anoLanzamiento;
}

void Pelicula::setGenero(std::string genero) {
    this->genero = genero;
}

void Pelicula::setDuracion(Duracion duracion) {
    this->duracion = duracion;
}
