#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

 void CalculaAdicao (float &n1,float &d1,float n2,float d2){
    n1 = n1 * d2 + n2 * d1;
    d1 = d1 * d2;
 }
 void CalculaSubtracao (float &n1,float &d1,float n2,float d2){
    n1 = n1 * d2 - n2 * d1;
    d1 = d1 * d2;
 }
void CalculaMultiplicacao (float &n1,float &d1,float n2,float d2){
    n1 = n1 * n2;
    d1 = d1 * d2;
}
void CalculaDivisao (float &n1,float &d1,float n2,float d2){
    n1 = n1 * d2;
    d1 = d1 * n2;
}

main(){
    setlocale(LC_ALL, "Portuguese");
    float numerador1,denominador1,numerador2,denominador2;
    cout << "Digite o numerador da primeira fração: \n";
    cin >> numerador1;
    cout << "Digite o denominador da primeira fração: \n";
    cin >> denominador1;
    cout << "\nDigite o numerador da segunda fração: \n";
    cin >> numerador2;
    cout << "Digite o denominador da segunda fração: \n";
    cin >> denominador2;
    float numerador = numerador1;
    float denominador = denominador1;
    CalculaAdicao(numerador1,denominador1,numerador2,denominador2);
    cout << "\nO resultado da Adição das frações é: " << numerador1 << " / " << denominador1;
    numerador1 = numerador;
    denominador1 = denominador;
    CalculaSubtracao(numerador1,denominador1,numerador2,denominador2);
    cout << "\nO resultado da Subtração das frações é: " << numerador1 << " / " << denominador1;
    numerador1 = numerador;
    denominador1 = denominador;
    CalculaMultiplicacao(numerador1,denominador1,numerador2,denominador2);
    cout << "\nO resultado da Multiplicação das frações é: " << numerador1 << " / " << denominador1;
    numerador1 = numerador;
    denominador1 = denominador;
    CalculaDivisao(numerador1,denominador1,numerador2,denominador2);
    cout << "\nO resultado da Divisão das frações é: " << numerador1 << " / " << denominador1;
}
