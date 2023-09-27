#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

float fabs (float x){
    if (x >= 0)
        return x;
    else
        return x * (-1);
}
main(){
    setlocale(LC_ALL, "Portuguese");
    float x;
    cout << "Este programa irá mostrar o valor absoluto (módulo) de um número digitado.\n";
    cout << "Digite um número: ";
    cin >> x;
    float resultado = fabs(x);
    cout << "O valor absoluto (módulo) do número é: " << resultado;
}
