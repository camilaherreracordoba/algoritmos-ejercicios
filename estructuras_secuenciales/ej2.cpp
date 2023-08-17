# include <iostream>

using namespace std;
/*
2) Leer dos números por teclado e imprimir:
- La suma de ambos
- La resta (el primero menos el segundo)
- La multiplicación
- La división
*/
int main() {
    int numero1, numero2;
    cout << "ingrese un numero: " << endl;
    cin >> numero1;
    cout << "ingrese otro numero: " << endl;
    cin >> numero2;
    cout << "la suma de ambos es: " << numero1 + numero2 << endl;
    cout << "la resta de ambos es: " << numero1 - numero2 << endl;
    cout << "la multiplicacion de ambos es: " << numero1 * numero2 << endl;
    cout << "la division de ambos es: " << numero1 / numero2 << endl;

}