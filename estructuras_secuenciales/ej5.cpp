#include <iostream>

using namespace std;

/*
5) Leer la base y la altura de un rectángulo, calcular el perímetro y la superficie.
*/

int main() {
    double base, altura;
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese la altura: ";
    cin >> altura;

    double perimetro = 2 * (base + altura);
    double superficie = base * altura;

    cout << "El perímetro es: " << perimetro << endl;
    cout << "La superficie es: " << superficie << endl;

    return 0;
}