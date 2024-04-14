#include "CuentaCorriente.h"
#include <iostream>

CuentaCorriente::CuentaCorriente() : nombre(""), apellidos(""), direccion(""), telefono(""), saldo(0.0) {}

CuentaCorriente::CuentaCorriente(std::string nombre, std::string apellidos, std::string direccion, std::string telefono, double saldo)
    : nombre(nombre), apellidos(apellidos), direccion(direccion), telefono(telefono), saldo(saldo) {}

std::string CuentaCorriente::getNombre() const {
    return nombre;
}

std::string CuentaCorriente::getApellidos() const {
    return apellidos;
}

std::string CuentaCorriente::getDireccion() const {
    return direccion;
}

std::string CuentaCorriente::getTelefono() const {
    return telefono;
}

double CuentaCorriente::getSaldo() const {
    return saldo;
}

void CuentaCorriente::setNombre(std::string nombre) {
    this->nombre = nombre;
}

void CuentaCorriente::setApellidos(std::string apellidos) {
    this->apellidos = apellidos;
}

void CuentaCorriente::setDireccion(std::string direccion) {
    this->direccion = direccion;
}

void CuentaCorriente::setTelefono(std::string telefono) {
    this->telefono = telefono;
}

void CuentaCorriente::retirarDinero(double cantidad) {
    saldo -= cantidad;
}

void CuentaCorriente::ingresarDinero(double cantidad) {
    saldo += cantidad;
}

void CuentaCorriente::consultarCuenta() const {
    std::cout << "Nombre: " << nombre << "\n";
    std::cout << "Apellidos: " << apellidos << "\n";
    std::cout << "Dirección: " << direccion << "\n";
    std::cout << "Teléfono: " << telefono << "\n";
    std::cout << "Saldo: " << saldo << "\n";
}

bool CuentaCorriente::saldoNegativo() const {
    return saldo < 0.0;
}
