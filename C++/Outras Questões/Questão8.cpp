#include <iostream>
using namespace std;
/* Escreva um programa em C++ que solicite ao usuário um valor inicial e um valor final,
e calcule a soma de todos os números ímpares nesse intervalo.*/

//Função para verificar se um numero é ímpar
int verifica_impar(int num){
    if(num % 2 != 0){
        return 1;
    }
    else{
        return 0;
    }
}

//Função que somará todos os números ímpares do intervalo

int soma_intervalo(int num1, int num2){
    int soma = 0;
    int menor_num, maior_num;
    if(num1 > num2){
        menor_num = num2 + 1;
        maior_num = num1;
    }
    else{
        menor_num = num1 + 1;
        maior_num = num2;
    }
    while(menor_num < maior_num){
        if(verifica_impar(menor_num)){
            soma = soma + menor_num;
        }
        menor_num++;
    }
    return soma;
}

main(){
    int num1,num2;
    cout << "-Este programa ira calcular o valor da soma de todos os numeros impares de um intervalo-\n\n";
    cout << "Digite um numero: \n";
    cin >> num1;
    cout << "Digite outro numero: \n";
    cin >> num2;
    int resultado = soma_intervalo(num1,num2);
    cout << "A soma de todos os numeros impares do intervalo e: " << resultado;
}
