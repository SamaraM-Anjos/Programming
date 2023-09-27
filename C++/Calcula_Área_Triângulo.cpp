#include <iostream>
#include <locale.h>
#include <stdio.h>
#include <math.h>
using namespace std;

float ConverteRadiano(float graus){
    const float pi = 3.141592;
    float radiano = (graus * pi) / 180;
    return radiano;
}

float AreaTriangulo (float a, float b, float graus){
    graus = ConverteRadiano(graus);
    float area = (a * b * sin(graus)) / 2;
    return area;
}


main(){
    setlocale(LC_ALL, "Portuguese");
    float lado_a, lado_b, graus;
    cout << "Este programa irá mostras a área de um triângulo fornecido.\n\n";
    cout << "Digite o lado A do triângulo: \n";
    cin >> lado_a;
    cout << "\nDigite o lado B do triângulo: \n";
    cin >> lado_b;
    cout << "Digite o angulo em graus do triângulo: ";
    cin >> graus;
    float resultado = AreaTriangulo(lado_a, lado_b, graus);
    cout << "O valor da área do triângulo é: " << resultado;
}
