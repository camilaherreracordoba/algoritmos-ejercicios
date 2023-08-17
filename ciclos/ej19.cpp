/*
19) Dada una serie de números enteros terminada en cero, imprimir los tres
mayores.
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int numero, maximo, segundo_maximo, tercer_maximo;
    vector<int> numeros;
    cout << "Ingrese un numero: ";
    cin >> numero;
    numeros.push_back(numero);
    maximo = numero;
    cout << "Ingrese un numero: ";
    cin >> numero;
    numeros.push_back(numero);
    if (numero > maximo) {
        segundo_maximo = maximo;
        maximo = numero;
    } else {
        segundo_maximo = numero;
    }
    cout << "Ingrese un numero: ";
    cin >> numero;
    numeros.push_back(numero);
    if (numero > maximo) {
        tercer_maximo = segundo_maximo;
        segundo_maximo = maximo;
        maximo = numero;
    } else if (numero > segundo_maximo) {
        tercer_maximo = segundo_maximo;
        segundo_maximo = numero;
    } else {
        tercer_maximo = numero;
    }
    cout << "Ingrese un numero: ";
    cin >> numero;
    while (numero != 0) {
        numeros.push_back(numero);
        if (numero > maximo) {
            tercer_maximo = segundo_maximo;
            segundo_maximo = maximo;
            maximo = numero;
        } else if (numero > segundo_maximo) {
            tercer_maximo = segundo_maximo;
            segundo_maximo = numero;
        } else if (numero > tercer_maximo) {
            tercer_maximo = numero;
        }
        cout << "Ingrese un numero: ";
        cin >> numero;
    }
    cout << "Los tres mayores son: " << maximo << ", " << segundo_maximo << ", " << tercer_maximo << endl;
    return 0;
}