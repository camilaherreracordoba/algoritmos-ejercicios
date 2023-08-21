/*
3) Escribir un programa que lea el nombre de una persona y luego lo salude.
*/

# include <iostream>
#include <string>

using namespace std;


int main () {
    string nombre;
    cout << "ingrese su nombre: ";
    cin >> nombre;
    cout << "Hola, " << nombre << "!"<< endl;
}