/*
21) Escribir un algoritmo que lea una serie de números reales y verifique si están
ordenados en forma ascendente, descendente o si no están ordenados,
informando por pantalla.
*/

#include <iostream>
#include <vector>
using namespace std;

bool ordenAscendente(vector<int> numeros) {
    bool ascendente = true;
    int i = 0;
    while (i < numeros.size() - 1 && ascendente) {
        if (numeros[i] > numeros[i + 1]) {
            ascendente = false;
        }
        i++;
    }
    return ascendente;
}
bool ordenDescendente(vector<int> numeros) {
    bool descendente = true;
    int i = 0;
    while (i < numeros.size() - 1 && descendente) {
        if (numeros[i] < numeros[i + 1]) {
            descendente = false;
        }
        i++;
    }
    return descendente;
}

int main(){
    //vector<int> numeros = {100, 25, 21, 30, 31};
    //vector<int> numeros = {21, 25, 30, 31, 100};
    vector<int> numeros = {100, 31, 30, 25, 21};
    int numero;
    char respuesta = 's';
    /*
    while (respuesta == 's')
    {
        cout << "Ingrese un numero: ";
        cin >> numero;
        numeros.push_back(numero);

        cout << "Desea ingresar otro numero? (s/n): ";
        cin >> respuesta;
    }
    */

    if (ordenAscendente(numeros))
    {
        cout << "Los numeros estan ordenados en forma ascendente" << endl;
    }
    else if (ordenDescendente(numeros))
    {
        cout << "Los numeros estan ordenados en forma descendente" << endl;
    }
    else
    {
        cout << "Los numeros no estan ordenados" << endl;
    }
    

    return 0;
}