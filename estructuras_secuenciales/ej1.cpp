/*
1) Leer un número por teclado e imprimirlo en pantalla con el siguiente cartel:
“Numero ingresado" = numero.
*/
# include <iostream>
using namespace std;

int main() {
    int numero;
    cout << "ingrese un numero: "; //<< endl;
    cin >> numero;
    cout << "el numero ingresado es: " << numero; // << endl;
    return 0;
}
