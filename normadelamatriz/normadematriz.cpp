#include <iostream>
#include <vector>
#include <cmath>    // Para sqrt() y fabs()
#include <iomanip>  // Para controlar la precisión en pantalla
using namespace std;

// -------------------------------------------------------------
// Función que calcula la norma L2 (Euclidiana)
// -------------------------------------------------------------
double normaL2(const vector<double>& v) {
    double suma = 0.0;
    for (double num : v) {
        suma += num * num;
    }
    return sqrt(suma);
}

// -------------------------------------------------------------
// Función que calcula la norma L∞ (Infinita)
// -------------------------------------------------------------
double normaLinf(const vector<double>& v) {
    double maximo = 0.0;
    for (double num : v) {
        if (fabs(num) > maximo)
            maximo = fabs(num);
    }
    return maximo;
}

// -------------------------------------------------------------
// Programa principal
// -------------------------------------------------------------
int main() {
    int n;
    cout << "Ingrese el tamaño del arreglo: ";
    cin >> n;

    if (n <= 0) {
        cout << "⚠️  El tamaño del arreglo debe ser mayor que cero." << endl;
        return 0;
    }

    vector<double> numeros(n);
    cout << "Ingrese los " << n << " numeros decimales:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    double l2 = normaL2(numeros);
    double linf = normaLinf(numeros);

    cout << fixed << setprecision(4); // Mostrar resultados con 4 decimales
    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Norma L2 (Euclidiana): " << l2 << endl;
    cout << "Norma L∞ (Infinita): " << linf << endl;

    return 0;
}
