/*
14) Leer un número N y calcular su factorial.
*/

#include <iostream>

using namespace std;

double factorialRecursivo(int numero){
    if (numero > 1)
    {
        return numero * factorialRecursivo(numero - 1);
    }
    else {
        return 1;
    }
}

double factorial(int numero){
    double resultado = 1;
    for (int i = 1; i <= numero; i++)
    {
        resultado *= i;
    }
    return resultado;
}

int main() {
    int ingreso;
    double resultado;
    cout << "Ingrese un numero: ";
    cin >> ingreso;
    if(ingreso < 0){
        cout << "No se puede calcular el factorial de un numero negativo" << endl;
    } else {
        resultado = factorial(ingreso);
        cout << "El factorial de " << ingreso << " es " << resultado << endl;
    }
}