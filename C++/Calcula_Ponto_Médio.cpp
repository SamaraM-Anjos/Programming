#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

void PontoMedio(float &x1, float &y1, float x2, float y2){
    x1 = (x1 + x2) / 2;
    y1 = (y1 + y2) / 2;
}

main(){
    setlocale(LC_ALL, "Portuguese");
    float x1,y1,x2,y2;
    cout << "Este programa irá dizer o ponto médio entre duas coordenadas/pontos fornecidos.\n";
    cout << "Digite o X da corrdenada X1: \n";
    cin >> x1;
    cout << "Digite o Y da corrdenada X1: \n";
    cin >> y1;
    cout << "Digite o X da corrdenada X2: \n";
    cin >> x2;
    cout << "Digite o Y da corrdenada X2: \n";
    cin >> y2;
    PontoMedio(x1,y1,x2,y2);
    cout << "\nA abcissa (X) do ponto médio é : " << x1;
    cout << "\nA ordenada (Y) do ponto médio é: " << y1;
}
