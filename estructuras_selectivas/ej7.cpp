/*
7) Leer dos números reales e imprimir el mayor de ellos
*/

#include <iostream>

using namespace std;

int main() {
    double numero1, numero2;
    cout << "Ingrese un número: ";
    cin >> numero1;
    cout << "Ingrese otro número: ";
    cin >> numero2;

    if (numero1 > numero2) {
        cout << "El número mayor es: " << numero1 << endl;
    } else if (numero1 < numero2) {
        cout << "El número mayor es: " << numero2 << endl;
    } else {
        cout << "Los números son iguales" << endl;
    }
}