/*
9) Escribir un algoritmo que determine si un número M es divisible por N.

*/

#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Ingrese un numero: ";
    cin >> m;
    cout << "Ingrese otro numero: ";
    cin >> n;

    if (m % n == 0) {
        cout << "El numero " << m << " es divisible por " << n << endl;
    } else {
        cout << "El numero " << m << " no es divisible por " << n << endl;
    }

    return 0;
}