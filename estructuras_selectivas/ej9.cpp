/*
9) Escribir un algoritmo que determine si un número M es divisible por N.

*/

#include <iostream>

using namespace std;

int main() {
    int m, n;
    cout << "Ingrese un número: ";
    cin >> m;
    cout << "Ingrese otro número: ";
    cin >> n;

    if (m % n == 0) {
        cout << "El número " << m << " es divisible por " << n << endl;
    } else {
        cout << "El número " << m << " no es divisible por " << n << endl;
    }

    return 0;
}