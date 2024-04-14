#ifndef CUENTACORRIENTE_H
#define CUENTACORRIENTE_H

#include <string>

class CuentaCorriente {
public:
    CuentaCorriente();
    CuentaCorriente(std::string nombre, std::string apellidos, std::string direccion, std::string telefono, double saldo);
    std::string getNombre() const;
    std::string getApellidos() const;
    std::string getDireccion() const;
    std::string getTelefono() const;
    double getSaldo() const;
    void setNombre(std::string nombre);
    void setApellidos(std::string apellidos);
    void setDireccion(std::string direccion);
    void setTelefono(std::string telefono);
    void retirarDinero(double cantidad);
    void ingresarDinero(double cantidad);
    void consultarCuenta() const;
    bool saldoNegativo() const;
private:
    std::string nombre;
    std::string apellidos;
    std::string direccion;
    std::string telefono;
    double saldo;
};

#endif // CUENTACORRIENTE_H
