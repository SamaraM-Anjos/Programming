#include <iostream>
using namespace std;

/*  Faça um programa que receba dois números inteiros que estão no intervalo compreendido por eles */

int main(){
    int menornumero;
    int num1, num2;
    cout << "Digite dois numeros inteiros: \n";
    cin >> num1 >> num2;
    if(num1 > num2){
        menornumero = num2 + 1;
        while(menornumero < num1){
            cout << "Os numeros entre: " << num1 << " e " << num2 << " sao: " << menornumero << "\n";
            menornumero++;
        }
    }
    else{
        if(num1 < num2){
            menornumero = num1 + 1;
            while(menornumero < num2){
                cout << "Os numeros entre: " << num2 << " e " << num1 << " sao: " << menornumero << "\n";
                menornumero++;
            }
        }
    }
}
