/*
23) Leer N y luego N lotes de números reales que terminan con un valor 0, y calcular
la media individual de cada lote, junto con la media total de todos los números
ingresados
*/

#include <iostream>
#include <vector>
using namespace std;

float media(vector<float> lote){
    float suma = 0;
    for(int i = 0; i < lote.size(); i++){
        suma += lote[i];
    }
    return suma/lote.size();
}

float totalMedias(vector<vector<float>> lotes){
    float medias = 0;
    for(int i = 0; i < lotes.size(); i++){
        medias += media(lotes[i]);
    }
    return medias/lotes.size();
}

int main(){
    int N;
    cout << "Ingrese N: ";
    cin >> N;
    vector<vector<float>> lotes;
    
    for(int i = 0; i < N; i++){
        vector<float> lote;
        float num;
        cout << "Ingrese lote " << i+1 << " (termina con 0): ";
        cin >> num;
        while(num != 0){
            lote.push_back(num);
            cin >> num;
        }
        lotes.push_back(lote);
    }

    for(int i = 0; i < lotes.size(); i++){
        cout << "Lote " << i+1 << ": ";
        for(int j = 0; j < lotes[i].size(); j++){
            cout << lotes[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < lotes.size(); i++){
        cout << "Media lote " << i+1 << ": " << media(lotes[i]) << endl;
    }

    cout << "Media total: " << totalMedias(lotes) << endl;
    
}