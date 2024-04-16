#include "Pelicula.h"

Pelicula::Pelicula(const std::string &n, const std::string &d, int a, const std::string &g, const Duracion &du)
    : nombre(n), director(d), anoLanzamiento(a), genero(g), duracion(du) {}

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

void Pelicula::setNombre(const std::string &n) {
    nombre = n;
}

void Pelicula::setDirector(const std::string &d) {
    director = d;
}

void Pelicula::setAnoLanzamiento(int a) {
    anoLanzamiento = a;
}

void Pelicula::setGenero(const std::string &g) {
    genero = g;
}

void Pelicula::setDuracion(const Duracion &du) {
    duracion = du;
}
