/*
13) Imprimir por pantalla una lista de 20 números consecutivos, los cuales
comienzan con un número ingresado por teclado.
*/

#include <iostream>

using namespace std;


int main() {
    int inicial;
    cout << "Ingrese un numero: ";
    cin >> inicial;

    for (int i = inicial; i < inicial + 20; i++) {
        cout << i << endl;
    }
}