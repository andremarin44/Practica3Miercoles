#include <string>
#include "Duracion.h"

class Pelicula {
private:
    std::string nombre;
    std::string director;
    int anoLanzamiento;
    std::string genero;
    Duracion duracion;

public:
    Pelicula(const std::string& nom, const std::string& dir, int ano, const std::string& gen, const Duracion& dur);
    std::string getNombre();
    std::string getDirector();
    int getAnoLanzamiento();
    std::string getGenero();
    Duracion getDuracion();
    void setNombre(const std::string& nom);
    void setDirector(const std::string& dir);
    void setAnoLanzamiento(int ano);
    void setGenero(const std::string& gen);
    void setDuracion(const Duracion& dur);
};
