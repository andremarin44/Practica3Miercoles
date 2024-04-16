#include "Pelicula.h"

Pelicula::Pelicula(const std::string& nom, const std::string& dir, int ano, const std::string& gen, const Duracion& dur)
    : nombre(nom), director(dir), anoLanzamiento(ano), genero(gen), duracion(dur) {}

std::string Pelicula::getNombre() {
    return nombre;
}

std::string Pelicula::getDirector() {
    return director;
}

int Pelicula::getAnoLanzamiento() {
    return anoLanzamiento;
}

std::string Pelicula::getGenero() {
    return genero;
}

Duracion Pelicula::getDuracion() {
    return duracion;
}

void Pelicula::setNombre(const std::string& nom) {
    nombre = nom;
}

void Pelicula::setDirector(const std::string& dir) {
    director = dir;
}

void Pelicula::setAnoLanzamiento(int ano) {
    anoLanzamiento = ano;
}

void Pelicula::setGenero(const std::string& gen) {
    genero = gen;
}

void Pelicula::setDuracion(const Duracion& dur) {
    duracion = dur;
}
