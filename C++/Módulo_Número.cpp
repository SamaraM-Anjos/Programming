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
    cout << "Este programa ir� mostrar o valor absoluto (m�dulo) de um n�mero digitado.\n";
    cout << "Digite um n�mero: ";
    cin >> x;
    float resultado = fabs(x);
    cout << "O valor absoluto (m�dulo) do n�mero �: " << resultado;
}
