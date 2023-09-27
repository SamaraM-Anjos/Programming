#include <iostream>
using namespace std;
/* Faça um programa que receba dois números
inteiros e gere os números inteiros que
estão no intervalo compreendido por eles.

*/

main()
{
    int menornumero;
    int num1, num2;
    cout << "Digite um numero:\n";
    cin >> num1;
    cout << "Digite outro numero:\n";
    cin >> num2;
    if(num1 > num2){
    menornumero = num2 + 1;
    while(menornumero < num1){
        cout << "Numeros entre:" << num1 << " e " << num2 << " e:" << menornumero << "\n";
        menornumero++;
        }
    }
    if(num1 < num2){
       menornumero = num1 + 1;
       while(menornumero < num2){
       cout << "Numeros entre: " << num2 << " e " << num1 << " e: " << menornumero << "\n";
       menornumero++;
       }
    }
}
