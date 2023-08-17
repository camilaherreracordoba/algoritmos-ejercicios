/*
15) Leer una serie de números reales, terminando la serie con un cero. Imprimir los
datos a medida que se los ingresa junto con la suma parcial de los mismos.
*/

#include <iostream>
// cl /EHsc hello.cpp
using namespace std;

int main() {
    float numero, suma = 0;
    cout << "Ingrese un numero: ";
    cin >> numero;
    while (numero != 0) {
        suma += numero;
        cout << "Suma parcial: " << suma << endl;
        cout << "Ingrese un numero: ";
        cin >> numero;
    }
    return 0;
}