#include "pelicula.h"

Pelicula::Pelicula(std::string n, std::string d, int a, std::string g, Duracion dur)
    : nombre(n), director(d), anioLanzamiento(a), genero(g), duracion(dur) {}

std::string Pelicula::getNombre() const {
    return nombre;
}

std::string Pelicula::getDirector() const {
    return director;
}

int Pelicula::getAnioLanzamiento() const {
    return anioLanzamiento;
}

std::string Pelicula::getGenero() const {
    return genero;
}

Duracion Pelicula::getDuracion() const {
    return duracion;
}

void Pelicula::setNombre(std::string n) {
    nombre = n;
}

void Pelicula::setDirector(std::string d) {
    director = d;
}

void Pelicula::setAnioLanzamiento(int a) {
    anioLanzamiento = a;
}

void Pelicula::setGenero(std::string g) {
    genero = g;
}

void Pelicula::setDuracion(Duracion dur) {
    duracion = dur;
}

