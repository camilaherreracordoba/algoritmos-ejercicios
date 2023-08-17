/*
14) Leer un número N y calcular su factorial.

*/
#include <iostream>

using namespace std;

double factorial(int numero){
    if (numero > 1)
    {
        return numero * factorial(numero - 1);
    }
    else {
        return 1;
    }
}

int main() {
    int ingreso;
    cout << "Ingrese un numero: ";
    cin >> ingreso;
    double resultado = factorial(ingreso);
    cout << "Factorial de " << ingreso << " es: " << resultado;
}