/*
16) Dada una serie de números reales, determinar el valor máximo, el mínimo y las
posiciones en que estos se encontraban en la serie. El programa deberá ir
preguntando si hay más números para ingresar
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
    float numero, maximo, minimo;
    int posicion_maximo, posicion_minimo, posicion = 0;
    string respuesta;
    cout << "Ingrese un numero: ";
    cin >> numero;
    maximo = numero;
    minimo = numero;
    posicion_maximo = posicion;
    posicion_minimo = posicion;
    cout << "Desea ingresar otro numero? (s/n): ";
    cin >> respuesta;
    while (respuesta == "s") {
        posicion++;
        cout << "Ingrese un numero: ";
        cin >> numero;
        if (numero > maximo) {
            maximo = numero;
            posicion_maximo = posicion;
        }
        if (numero < minimo) {
            minimo = numero;
            posicion_minimo = posicion;
        }
        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> respuesta;
    }
    cout << "El maximo es " << maximo << " y se encuentra en la posicion " << posicion_maximo << endl;
    cout << "El minimo es " << minimo << " y se encuentra en la posicion " << posicion_minimo << endl;
    return 0;
}