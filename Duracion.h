class Duracion {
private:
    int horas;
    int minutos;
    int segundos;

public:
    Duracion(int h, int m, int s);
    int getHoras();
    int getMinutos();
    int getSegundos();
    void setHoras(int h);
    void setMinutos(int m);
    void setSegundos(int s);
};

