#include <iostream>
#include <string>
#include <cctype> // Para tolower
using namespace std;

int main() {
    string cadena;
    int contador = 0;

    cout << "Ingrese una cadena de texto: ";
    getline(cin, cadena);

    for (char c : cadena) {
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'á' || c == 'é' || c == 'í' || c == 'ó' || c == 'ú') {
            contador++;
        }
    }

    cout << "La cadena contiene " << contador << " vocales." << endl;
    return 0;
}
