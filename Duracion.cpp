#include "Duracion.h"

Duracion::Duracion(int h, int m, int s) : horas(h), minutos(m), segundos(s) {}

int Duracion::getHoras() {
    return horas;
}

int Duracion::getMinutos() {
    return minutos;
}

int Duracion::getSegundos() {
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

