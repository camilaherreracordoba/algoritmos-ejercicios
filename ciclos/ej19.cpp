/*
19) Dada una serie de números enteros terminada en cero, imprimir los tres
mayores.
*/

#include <iostream>
#include <vector>
using namespace std;

struct TresMaximos {
    int primerMaximo;
    int segundoMaximo;
    int tercerMaximo;
};

TresMaximos obtenerTresMayores(vector<int> numeros) {
    TresMaximos maximos = {INT_MIN, INT_MIN, INT_MIN};
    
    for (int i = 0; i < numeros.size(); i++) {
        if (numeros[i] > maximos.primerMaximo) {
            maximos.tercerMaximo = maximos.segundoMaximo;
            maximos.segundoMaximo = maximos.primerMaximo;
            maximos.primerMaximo = numeros[i];
        } else if (numeros[i] > maximos.segundoMaximo) {
            maximos.tercerMaximo = maximos.segundoMaximo;
            maximos.segundoMaximo = numeros[i];
        } else if (numeros[i] > maximos.tercerMaximo) {
            maximos.tercerMaximo = numeros[i];
        }
    }
     
    return maximos;
}

int main() {
    int numero;
    vector<int> numeros;

    do {
        cout << "Ingrese un numero (0 para terminar): ";
        cin >> numero;
        numeros.push_back(numero);
    } while (numero != 0);

    TresMaximos maximos = obtenerTresMayores(numeros);

    cout << "Los maximos son: " << maximos.primerMaximo << ", " << maximos.segundoMaximo << ", " << maximos.tercerMaximo << endl;

}