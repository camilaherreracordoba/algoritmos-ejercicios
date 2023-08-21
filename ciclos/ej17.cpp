/*
17) Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor
y las veces que aparece cada uno.
*/

#include <iostream>
#include <string>
#include <vector> 
using namespace std;

int maximo(vector<int> numeros) {
    int maximo = numeros[0];
    for(int i = 0; i < numeros.size(); i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }
    return maximo;
}

int minimo(vector<int> numeros) {
    int minimo = numeros[0];
    for(int i = 0; i < numeros.size(); i++) {
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }
    return minimo;
}
int cantidad_apariciones(vector<int> numeros, int numero) {
    int cantidad = 0;
    for(int i = 0; i < numeros.size(); i++) {
        if (numeros[i] == numero) {
            cantidad++;
        }
    }
    return cantidad;
}
int main() {
    int n, numero;
    int max, min, cantidad_max, cantidad_min;
    vector<int> numeros;

    cout << "Indique la cantidad de numeros a ingresar: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Ingrese un numero (" << i + 1 << " de " << n << "): ";
        cin >> numero;
        numeros.push_back(numero);
    }
    max = maximo(numeros);
    min = minimo(numeros);

    cantidad_max = cantidad_apariciones(numeros, max);
    cantidad_min = cantidad_apariciones(numeros, min);

    cout << "El maximo es " << max << " y se repite " << cantidad_max << " veces" << endl;
    cout << "El minimo es " << min << " y se repite " << cantidad_min << " veces" << endl;
}