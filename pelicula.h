#ifndef PELICULA_H
#define PELICULA_H

#include <string>
#include "duracion.h"

class Pelicula {
public:
    Pelicula(std::string n = "", std::string d = "", int a = 0, std::string g = "", Duracion dur = Duracion());
    std::string getNombre() const;
    std::string getDirector() const;
    int getAnioLanzamiento() const;
    std::string getGenero() const;
    Duracion getDuracion() const;
    void setNombre(std::string n);
    void setDirector(std::string d);
    void setAnioLanzamiento(int a);
    void setGenero(std::string g);
    void setDuracion(Duracion dur);
private:
    std::string nombre;
    std::string director;
    int anioLanzamiento;
    std::string genero;
    Duracion duracion;
};

#endif // PELICULA_H
