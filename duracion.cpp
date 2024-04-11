#include "duracion.h"

Duracion::Duracion(int h, int m, int s) : horas(h), minutos(m), segundos(s) {}

int Duracion::getHoras() const {
    return horas;
}

int Duracion::getMinutos() const {
    return minutos;
}

int Duracion::getSegundos() const {
    return segundos;
}

void Duracion::setHoras(int h) {
    horas = h;
}

void Duracion::setMinutos(int m) {
    minutos = m;
}

void Duracion::setSegundos(int s) {
    segundos = s;
}
