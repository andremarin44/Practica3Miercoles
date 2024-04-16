// Duracion.h
#ifndef DURACION_H
#define DURACION_H

class Duracion {
private:
    int horas;
    int minutos;
    int segundos;
public:
    Duracion(int h = 0, int m = 0, int s = 0);
    int getHoras() const;
    int getMinutos() const;
    int getSegundos() const;
    void setHoras(int h);
    void setMinutos(int m);
    void setSegundos(int s);
};

#endif // DURACION_H
