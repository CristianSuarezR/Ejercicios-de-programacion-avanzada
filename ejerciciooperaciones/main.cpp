// main.cpp
#include <iostream>
#include "operaciones.h"

int main() {
    int a, b;

    std::cout << "Ingrese el primer número entero: ";
    std::cin >> a;

    std::cout << "Ingrese el segundo número entero: ";
    std::cin >> b;

    std::cout << "\nResultados:\n";
    std::cout << "Suma: " << sumar(a, b) << std::endl;
    std::cout << "Resta: " << restar(a, b) << std::endl;
    std::cout << "Multiplicación: " << multiplicar(a, b) << std::endl;

    try {
        std::cout << "División: " << dividir(a, b) << std::endl;
    } catch (const std::invalid_argument &e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}
