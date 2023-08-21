/*
10) Leer dos números y luego una opción que puede ser “ + ”: suma, “ – “: resta, “ *
”: multiplicación o “ / “: división. Según la opción elegida realizar el cálculo.
*/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int m, n, resultado;
    char opcion;
    cout << "Ingrese un numero: ";
    cin >> m;
    cout << "Ingrese otro numero: ";
    cin >> n;
    cout << "Ingrese la operacion a realizar (+, -, *, /): ";
    cin >> opcion;

    switch (opcion)
    {
    case '+':
        cout << "Suma: " << m + n; 
        break;
    case '-':
        cout << "Resta: " << m - n;
        break;
    case '*':
        cout << "Multiplicacion: " << m * n;
        break;
    case '/':
        cout << "Division: " << m / n;
        break;
    default:
        cout << "Operacion no valida";
        break;
    }
}