/*
20) Dada una serie de nombres con sus salarios respectivos, determinar el salario
máximo, el mínimo y la persona que percibe cada uno.
*/

#include <iostream>
#include<tuple>
#include <vector>
#include <string>

using namespace std;

tuple<string, int> personaSalarioMaximo(vector<tuple<string, int>> personas) {
    tuple<string, int> maximo = personas[0];
    for (int i = 0; i < personas.size(); i++) {
        if (get<1>(personas[i]) > get<1>(maximo)) {
            maximo = personas[i];
        }
    }
    return maximo;
}

tuple<string, int> personaSalarioMinimo(vector<tuple<string, int>> personas) {
    tuple<string, int> minimo = personas[0];

    for (int i = 0; i < personas.size(); i++) {
        if (get<1>(personas[i]) < get<1>(minimo)) {
            minimo = personas[i];
        }
    }
    return minimo;
}
int main() {
    tuple<string, int> persona;
    vector<tuple<string, int>> personas;

    do {
        cout << "Ingrese el nombre de la persona (0 para terminar): ";
        cin >> get<0>(persona);
        if (get<0>(persona) != "0") {
            cout << "Ingrese el salario de la persona: ";
            cin >> get<1>(persona);
            personas.push_back(persona);
        }
    } while (get<0>(persona) != "0");
    
    
    tuple<string, int> salario_min = personaSalarioMinimo(personas);
    tuple<string, int> salario_max = personaSalarioMaximo(personas);
    cout << "Salario maximo: " << get<1>(salario_max) << ", " << get<0>(salario_max) << endl;
    cout << "Salario minimo: " << get<1>(salario_min) <<", " << get<0>(salario_min) << endl;
}