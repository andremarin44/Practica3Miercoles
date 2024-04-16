#include "CuentaCorriente.h"
#include <iostream>

CuentaCorriente::CuentaCorriente() {

}

CuentaCorriente::CuentaCorriente(std::string nombre, std::string apellidos, std::string direccion, std::string telefono, double saldo) {
    this->nombre = nombre;
    this->apellidos = apellidos;
    this->direccion = direccion;
    this->telefono = telefono;
    this->saldo = saldo;
}

void CuentaCorriente::setNombre(std::string nombre) {
    this->nombre = nombre;
}

std::string CuentaCorriente::getNombre() {
    return this->nombre;
}


void CuentaCorriente::retirarDinero(double cantidad) {
    this->saldo -= cantidad;
}

void CuentaCorriente::ingresarDinero(double cantidad) {
    this->saldo += cantidad;
}

void CuentaCorriente::consultarCuenta() {
    std::cout << "Nombre: " << this->nombre << "\n";
    std::cout << "Apellidos: " << this->apellidos << "\n";
    std::cout << "Dirección: " << this->direccion << "\n";
    std::cout << "Teléfono: " << this->telefono << "\n";
    std::cout << "Saldo: " << this->saldo << "\n";
}

bool CuentaCorriente::saldoNegativo() {
    return this->saldo < 0;
}

