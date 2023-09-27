#include <iostream>
#include <math.h>
using namespace std;

float volume_esfera (float raio){
    const float pi = 3.141592;
    float volume = ((4.0 / 3.0) * pi) * pow( raio, 3);
    return volume;
}

main(){
    float raio;
    cout << "Digite o raio da esfera e saiba seu volume: \n";
    cin >> raio;
    float resultado = volume_esfera (raio);
    cout << "O volume da esfera e: " << resultado;
}
