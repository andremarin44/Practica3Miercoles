#ifndef PELICULA_H
#define PELICULA_H

#include <string>

class Duracion {
private:
    int horas;
    int minutos;
    int segundos;

public:
    Duracion();
    Duracion(int horas, int minutos, int segundos);

    int getHoras() const;
    int getMinutos() const;
    int getSegundos() const;
};

class Pelicula {
private:
    std::string nombre;
    std::string director;
    int anoLanzamiento;
    std::string genero;
    Duracion duracion;

public:
    Pelicula();
    Pelicula(std::string nombre, std::string director, int anoLanzamiento, std::string genero, Duracion duracion);

    // Getters
    std::string getNombre() const;
    std::string getDirector() const;
    int getAnoLanzamiento() const;
    std::string getGenero() const;
    Duracion getDuracion() const;

    // Setters
    void setNombre(std::string nombre);
    void setDirector(std::string director);
    void setAnoLanzamiento(int anoLanzamiento);
    void setGenero(std::string genero);
    void setDuracion(Duracion duracion);
};

#endif

