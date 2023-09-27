#include <iostream>
using namespace std;
/*Escreva um programa em C++ que solicite ao usuário um número e verifique se ele é um número perfeito.
Um número perfeito é aquele cuja soma de todos os seus divisores (exceto ele mesmo) resulta no próprio número.
 */

 int verifica_numero(int num){
    int soma = 0;
    for(int i = 1; i < num; i++){
            if(num % i == 0){
            soma = soma + i;
        }
    }
    if(soma == num){
        return 1;
    }
    else{
        return 0;
    }
 }

 main(){
    int numero;
    cout << "Este programa ira dizer se o numero fornecido e um Numero Perfeito\n\n";
    cout << "Digite um numero: \n";
    cin >> numero;

    int resultado = verifica_numero(numero);
    if(resultado){
        cout << "O numero digitado e um Numero Perfeito";
    }
    else{
        cout << "O numero digitado nao e um Numero Perfeito";
    }
 }
