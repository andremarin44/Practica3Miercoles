#include <string>

class CuentaCorriente {
private:
    std::string nombre;
    std::string apellidos;
    std::string direccion;
    std::string telefono;
    double saldo;

public:

    CuentaCorriente();

    CuentaCorriente(std::string nombre, std::string apellidos, std::string direccion, std::string telefono, double saldo);

    void setNombre(std::string nombre);
    std::string getNombre();

    void retirarDinero(double cantidad);
    void ingresarDinero(double cantidad);
    void consultarCuenta();
    bool saldoNegativo();
};

