# include <iostream>
#include <string>

using namespace std;

/*
3) Escribir un programa que lea el nombre de una persona y luego lo salude.
*/

int main () {
    string nombre;
    cout << "ingrese su nombre: " << endl; // lo mismo que cerrar con '\n'
    cin >> nombre;
    cout << "Hola, " << nombre << "!"<< endl;
}