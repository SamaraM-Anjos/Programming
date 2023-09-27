#include <iostream>
using namespace std;

/* Escreva um programa em C++ que solicite ao usuário um número e verifique se ele é um número palíndromo.
Um número palíndromo é aquele que permanece o mesmo quando seus dígitos são invertidos.
*/

bool verifica_numero (int &num){
    int num2 = num;
    int resto;
    int numinvertido = 0;
    while(num != 0){
        resto = num  % 10;
        numinvertido = numinvertido * 10 + resto;
        num = num / 10;
    }
    if(num2 == numinvertido){
        return 1;
    }
    else{
        return 0;
    }
}

main (){
    int num;
    cout << "--Este programa ira informar se o numero que foi digitado e um palindromo--\n\n";
    cout << "Digite um numero:\n";
    cin >> num;
    int resultado = verifica_numero(num);
    if(resultado == 1){
        cout << "O numero e um palindromo";
    }
    else{
        cout << "O numero nao e um palindromo";
    }
}
