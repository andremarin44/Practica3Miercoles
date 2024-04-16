#ifndef PELICULA_H
#define PELICULA_H

#include "Duracion.h"
#include <string>

class Pelicula {
private:
    std::string nombre;
    std::string director;
    int anoLanzamiento;
    std::string genero;
    Duracion duracion;
public:
    Pelicula(const std::string &n = "", const std::string &d = "", int a = 0, const std::string &g = "", const Duracion &du = Duracion());
    std::string getNombre() const;
    std::string getDirector() const;
    int getAnoLanzamiento() const;
    std::string getGenero() const;
    Duracion getDuracion() const;
    void setNombre(const std::string &n);
    void setDirector(const std::string &d);
    void setAnoLanzamiento(int a);
    void setGenero(const std::string &g);
    void setDuracion(const Duracion &du);
};

#endif // PELICULA_H

