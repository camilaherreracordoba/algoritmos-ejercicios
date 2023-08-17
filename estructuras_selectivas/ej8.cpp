/*
8) Escribir un algoritmo que determine si un número es par.
*/

#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << "El número es par" << endl;
    } else {
        cout << "El número es impar" << endl;
    }

    return 0;
}