#include <iostream>
#include <vector>
using namespace std;

// Función que encuentra el valor máximo, mínimo y sus posiciones
void encontrarMaxMin(const vector<double>& numeros, 
                     double& maximo, int& posMax, 
                     double& minimo, int& posMin) {
    if (numeros.empty()) {
        cout << "El vector está vacío." << endl;
        return;
    }

    // Inicialización
    maximo = minimo = numeros[0];
    posMax = posMin = 0;

    // Recorremos el vector
    for (int i = 1; i < numeros.size(); i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
            posMax = i;
        }
        if (numeros[i] < minimo) {
            minimo = numeros[i];
            posMin = i;
        }
    }
}

int main() {
    int n;
    cout << "Ingrese la cantidad de numeros del arreglo: ";
    cin >> n;

    vector<double> arreglo(n);
    cout << "Ingrese los " << n << " numeros decimales:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arreglo[i];
    }

    double maximo, minimo;
    int posMax, posMin;

    encontrarMaxMin(arreglo, maximo, posMax, minimo, posMin);

    cout << "\n--- RESULTADOS ---" << endl;
    cout << "Valor maximo: " << maximo << " en la posicion " << posMax << endl;
    cout << "Valor minimo: " << minimo << " en la posicion " << posMin << endl;

    return 0;
}
