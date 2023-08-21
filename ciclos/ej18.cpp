/*
18) Leer A y B, enteros. Calcular C = A x B mediante sumas sucesivas e imprimir el
resultado.
*/

#include <iostream>

using namespace std;

int main() {
    int a, b, c = 0;

    cout << "Ingrese A: ";
    cin >> a;
    cout << "Ingrese B: ";
    cin >> b;

    for (int i = 0; i < b; i++) {
        c+= a;
    }

    cout << "Resultado de " << a << "x" << b << ": " << c;
}