/*
11) Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel diciendo
qué opción se eligió o si fue una opción incorrecta
*/

# include <iostream>

using namespace std;

int main () {
    int opcion;
    cout << "Ingrese una opcion: " << endl;
    cout << "1) Opcion 1" << endl;
    cout << "2) Opcion 2" << endl;
    cout << "3) Opcion 3" << endl;
    cout << "4) Opcion 4" << endl;
    cin >> opcion;
    switch (opcion) {
        case 1: cout << "Se eligio la opcion 1" << endl; break;
        case 2: cout << "Se eligio la opcion 2" << endl; break;
        case 3: cout << "Se eligio la opcion 3" << endl; break;
        case 4: cout << "Se eligio la opcion 4" << endl; break;
        default: cout << "Opcion incorrecta" << endl; break;
    }
}