/*
12) Pasar un período expresado en segundos a un período expresado en días, horas,
minutos y segundos
*/
#include <iostream>

using namespace std;

int main() {
    int segundos;

    cout << "Ingrese un período en segundos: ";
    cin >> segundos;

    int dias = segundos / 86400;
    segundos = segundos % 86400;
    int horas = segundos / 3600;
    segundos = segundos % 3600;
    int minutos = segundos / 60;
    segundos = segundos % 60;

    cout << "El período es: " << dias << " días, " << horas << " horas, " << minutos << " minutos y " << segundos << " segundos" << endl;
}