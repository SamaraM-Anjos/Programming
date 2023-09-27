#include <iostream>
using namespace std;
/*
Escreva um programa em C++ que solicite ao usuário um valor inicial e um valor final,
e exiba todos os números primos nesse intervalo.
*/

//Função para verificar se o numero e primo

bool verifica_primo(int num){
    int qtdd_divisores = 0;
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            qtdd_divisores++;
        }
    }
    if(qtdd_divisores == 2){
        return 1;
    }
    else{
        return 0;
    }
}

main(){
    int num1,num2,maior_num, menor_num;;
    cout << "Este programa ira mostrar todos os numeros primos presentes em um intervalo de dois numeros\n\n";
    cout << "Digite o primeiro numero: \n";
    cin >> num1;
    cout << "\nDigite outro numero: \n";
    cin >> num2;
    cout << "Os numeros primos no intervalo entre: " << num1 << " e " << num2 << " sao: \n";

    if(num1 > num2){
        maior_num = num1 - 1;
        menor_num = num2;
        }

        else{
        maior_num = num2 - 1;
        menor_num = num1;
    }
    while(menor_num < maior_num){
        menor_num++;
        if(verifica_primo(menor_num) == 1){
            cout << "\n" << menor_num << "\n";
        }
    }
    if(verifica_primo(num1) == 1){
        cout << "\nO numero: " << num1 << " tambem e e primo\n";
    }
    if(verifica_primo(num2) == 1){
        cout << "\nO numero: " << num2 << " tambem e primo\n";
    }
}
