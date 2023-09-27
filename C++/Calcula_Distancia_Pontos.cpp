#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <math.h>
using namespace std;

float DistanciaPontos(float x1, float y1, float x2, float y2){
    float distancia = sqrt(pow( (x1 - x2), 2) +  pow( (y1 - y2), 2));
    return distancia;
}

main(){
    setlocale(LC_ALL, "Portuguese");
    float ponto_x1, ponto_y1, ponto_x2, ponto_y2;
    cout << "Este programa irá mostras a distância entre dois pontos em um plano.\n";
    cout << "\nDigite a coordenada X do primeiro ponto: \n";
    cin >> ponto_x1;
    cout << "\nDigite a coordenada Y do primeiro ponto: \n";
    cin >> ponto_y1;
    cout << "\nDigite a coordenada X do segundo ponto: \n";
    cin >> ponto_x2;
    cout << "\nDigite a coordenada Y do segundo ponto: \n";
    cin >> ponto_y2;

    float resultado = DistanciaPontos(ponto_x1, ponto_y1, ponto_x2, ponto_y2);
    cout << "A distância entre esses dois pontos é: " << resultado;
}
