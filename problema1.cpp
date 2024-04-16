#include "CuentaCorriente.h"
#include <iostream>

void problema1() {
    CuentaCorriente cuenta;
    int opcion;
    std::string nombre, apellidos, direccion, telefono;
    double cantidad;

    std::cout << "¿Deseas ingresar los datos de la cuenta (1) o comenzar con una cuenta predeterminada (2)? ";
    std::cin >> opcion;

    if (opcion == 1) {
        std::cout << "Ingresa el nombre: ";
        std::cin >> nombre;
        cuenta.setNombre(nombre);

    } else {
        cuenta = CuentaCorriente("Camilo", "Pacheco", "Calle 123", "555-5555", 1000);
    }

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Consultar cuenta\n";
        std::cout << "2. Ingresar dinero\n";
        std::cout << "3. Retirar dinero\n";
        std::cout << "4. Modificar datos de la cuenta\n";
        std::cout << "5. Salir\n";
        std::cout << "Elige una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                cuenta.consultarCuenta();
                break;
            case 2:
                std::cout << "Ingresa la cantidad a depositar: ";
                std::cin >> cantidad;
                cuenta.ingresarDinero(cantidad);
                break;
            case 3:
                std::cout << "Ingresa la cantidad a retirar: ";
                std::cin >> cantidad;
                cuenta.retirarDinero(cantidad);
                break;
            case 4:
                std::cout << "Ingresa el nuevo nombre: ";
                std::cin >> nombre;
                cuenta.setNombre(nombre);

                break;
            case 5:
                std::cout << "Saliendo del programa.\n";
                break;
            default:
                std::cout << "Opción no valida.\n";
                break;
        }
    } while (opcion != 5);

}
