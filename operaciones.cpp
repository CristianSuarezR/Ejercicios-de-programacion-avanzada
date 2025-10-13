// operaciones.cpp
#include "operaciones.h"
#include <stdexcept> // Para manejar errores

int sumar(int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b) {
    return a * b;
}

double dividir(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Error: división por cero.");
    }
    return static_cast<double>(a) / b;
}
