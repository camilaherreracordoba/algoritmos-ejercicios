/*
6) Leer un número real y decir si es mayor, menor o igual a cero
*/
#include <iostream>

using namespace std;

int main() {
    double numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "El número es mayor a cero" << endl;
    } else if (numero < 0) {
        cout << "El número es menor a cero" << endl;
    } else {
        cout << "El número es igual a cero" << endl;
    }

    return 0;
}