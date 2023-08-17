#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

using namespace std;

/*
4) Dado el radio R de una esfera que se solicita por teclado, calcular e imprimir su
superficie y su volumen.
*/

int main() {
    double radio;
    double pi = M_PI;
    
    cout << "Ingrese el radio: ";
    cin >> radio;

    double superficie = 4 * pi * pow(radio, 2);
    double volumen = (4.0 / 3.0) * pi * pow(radio, 3);

    cout << "El área es: " << superficie << endl;
    cout << "El volumen es: " << volumen << endl;

    return 0;
}