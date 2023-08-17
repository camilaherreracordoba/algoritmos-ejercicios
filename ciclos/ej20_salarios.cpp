#include <iostream>
#include<tuple>
#include <vector>
#include <string>
// cl /EHsc hello.cpp
using namespace std;

/*
20) Dada una serie de nombres con sus salarios respectivos, determinar el salario
máximo, el mínimo y la persona que percibe cada uno.
*/


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

    // ????
    persona = make_tuple("Juan", 1000);
    personas.push_back(persona);
    persona = make_tuple("Pedro", 2000);
    personas.push_back(persona);
    persona = make_tuple("Maria", 3000);
    personas.push_back(persona);
    persona = make_tuple("Jose", 4000);
    personas.push_back(persona);
    persona = make_tuple("Luis", 500);
    personas.push_back(persona);
    
    tuple<string, int> salario_min = personaSalarioMinimo(personas);
    tuple<string, int> salario_max = personaSalarioMaximo(personas);
    cout << "Salario maximo: " << get<1>(salario_max) << ", " << get<0>(salario_max) << endl;
    cout << "Salario minimo: " << get<1>(salario_min) <<", " << get<0>(salario_min) << endl;
}