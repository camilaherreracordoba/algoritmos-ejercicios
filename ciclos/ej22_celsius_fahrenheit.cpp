/*
22) La relación entre temperaturas Celsius y Fahrenheit está dada por: 
C = 5/9 * (F –32). 
Escribir un algoritmo que haga una tabla de valores Celsius-Fahrenheit, para
valores entre OºF y 200ºF, a intervalos de 10º
*/
#include <iostream>
using namespace std;

float fahrenheitACelsius(float grados){
    return (grados - 32) * 5/9 ;
}

int main() {
    float gradosFahrenheit = 0;
    float gradosCelsius = 0;
    cout << "Fahrenheit a Celsius" << endl;

    while (gradosFahrenheit <= 200)
    {
        gradosCelsius = fahrenheitACelsius(gradosFahrenheit);
        cout << gradosFahrenheit << " | " << gradosCelsius << endl;
        gradosFahrenheit += 10;
    }
    
}