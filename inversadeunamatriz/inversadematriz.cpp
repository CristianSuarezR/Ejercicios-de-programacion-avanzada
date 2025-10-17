#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip> // Para controlar los decimales

using namespace std;

// ------------------------- FUNCIONES AUXILIARES -------------------------

// Imprimir una matriz
void imprimirMatriz(const vector<vector<double>>& M) {
    cout << fixed << setprecision(4); // mostrar con 4 decimales
    for (auto fila : M) {
        for (double val : fila)
            cout << val << "\t";
        cout << endl;
    }
}

// Multiplicar dos matrices
vector<vector<double>> multiplicar(const vector<vector<double>>& A, const vector<vector<double>>& B) {
    int filasA = A.size(), colsA = A[0].size();
    int filasB = B.size(), colsB = B[0].size();
    vector<vector<double>> resultado(filasA, vector<double>(colsB, 0));

    for (int i = 0; i < filasA; i++)
        for (int j = 0; j < colsB; j++)
            for (int k = 0; k < colsA; k++)
                resultado[i][j] += A[i][k] * B[k][j];

    return resultado;
}

// Transpuesta de una matriz
vector<vector<double>> transpuesta(const vector<vector<double>>& M) {
    int filas = M.size(), columnas = M[0].size();
    vector<vector<double>> T(columnas, vector<double>(filas));

    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            T[j][i] = M[i][j];

    return T;
}

// Verificar si una matriz es cuadrada
bool esCuadrada(const vector<vector<double>>& M) {
    return M.size() == M[0].size();
}

// Método de Gauss-Jordan para invertir una matriz cuadrada
bool inversaMatriz(vector<vector<double>>& M, vector<vector<double>>& inv) {
    int n = M.size();
    inv.assign(n, vector<double>(n, 0));

    // Inicializar matriz identidad
    for (int i = 0; i < n; i++)
        inv[i][i] = 1;

    for (int i = 0; i < n; i++) {
        double pivote = M[i][i];
        if (fabs(pivote) < 1e-10) {
            bool intercambio = false;
            for (int k = i + 1; k < n; k++) {
                if (fabs(M[k][i]) > 1e-10) {
                    swap(M[i], M[k]);
                    swap(inv[i], inv[k]);
                    pivote = M[i][i];
                    intercambio = true;
                    break;
                }
            }
            if (!intercambio)
                return false;
        }

        // Normalizar fila del pivote
        for (int j = 0; j < n; j++) {
            M[i][j] /= pivote;
            inv[i][j] /= pivote;
        }

        // Hacer ceros en las demás filas
        for (int k = 0; k < n; k++) {
            if (k != i) {
                double factor = M[k][i];
                for (int j = 0; j < n; j++) {
                    M[k][j] -= factor * M[i][j];
                    inv[k][j] -= factor * inv[i][j];
                }
            }
        }
    }
    return true;
}

// Calcular pseudo-inversa de Moore-Penrose
vector<vector<double>> pseudoInversa(const vector<vector<double>>& A) {
    vector<vector<double>> A_T = transpuesta(A);

    if (A.size() >= A[0].size()) {
        // Más filas que columnas → A⁺ = (AᵗA)⁻¹ Aᵗ
        vector<vector<double>> ATA = multiplicar(A_T, A);
        vector<vector<double>> ATA_inv;
        vector<vector<double>> copia = ATA;

        if (!inversaMatriz(copia, ATA_inv)) {
            cout << "❌ No se puede calcular la pseudo-inversa: (AᵗA) no es invertible." << endl;
            return {};
        }

        return multiplicar(ATA_inv, A_T);
    } else {
        // Más columnas que filas → A⁺ = Aᵗ (A Aᵗ)⁻¹
        vector<vector<double>> AAT = multiplicar(A, A_T);
        vector<vector<double>> AAT_inv;
        vector<vector<double>> copia = AAT;

        if (!inversaMatriz(copia, AAT_inv)) {
            cout << "❌ No se puede calcular la pseudo-inversa: (A Aᵗ) no es invertible." << endl;
            return {};
        }

        return multiplicar(A_T, AAT_inv);
    }
}

// ------------------------------ MAIN ------------------------------

int main() {
    int filas, columnas;
    cout << "Ingrese el numero de filas: ";
    cin >> filas;
    cout << "Ingrese el numero de columnas: ";
    cin >> columnas;

    vector<vector<double>> matriz(filas, vector<double>(columnas));
    cout << "Ingrese los elementos de la matriz:" << endl;
    for (int i = 0; i < filas; i++)
        for (int j = 0; j < columnas; j++)
            cin >> matriz[i][j];

    cout << "\nMatriz ingresada:\n";
    imprimirMatriz(matriz);

    if (!esCuadrada(matriz)) {
        cout << "\n⚠ La matriz no es cuadrada. Se calculará la pseudo-inversa de Moore-Penrose:\n";
        vector<vector<double>> pinv = pseudoInversa(matriz);
        if (!pinv.empty()) {
            cout << "\n✅ Pseudo-inversa (Moore-Penrose):\n";
            imprimirMatriz(pinv);
        }
        return 0;
    }

    // Si es cuadrada, intentar calcular la inversa
    vector<vector<double>> inversa;
    vector<vector<double>> copia = matriz;

    if (inversaMatriz(copia, inversa)) {
        cout << "\n✅ La matriz es invertible. Su inversa es:\n";
        imprimirMatriz(inversa);
    } else {
        cout << "\n❌ La matriz no tiene inversa (determinante = 0 o filas linealmente dependientes)." << endl;
    }

    return 0;
}
