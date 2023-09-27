#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int matriz[5][5];
    int soma_lin4 = 0;
    int soma_col2 = 0;
    int soma_diagonal_prin = 0;
    int soma_diagonal_sec = 0;
    int soma = 0;
    int i = 0, j = 0;

    //Pegando os elementos da matriz e somando todos eles

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
            cout << "Digite o número da posição [" << i << ", " << j << "] da matriz: \n";
            cin >> matriz[i][j];
            soma = soma + matriz[i][j];
        }
        cout << "\n";
    }

    //Somando os elementos da linha 4 da matriz

    i = 0;
    j = 0;
    while(i < 5){
        if(i == 4){
            while(j < 5){
                soma_lin4 = soma_lin4 + matriz[i][j];
                j++;
            }
        }
        i++;
    }

    //Somando os elementos da coluna 2 da matriz

    i = 0;
    j = 0;
    while(j < 5){
        if(j == 2){
            while(i < 5){
                soma_col2 = soma_col2 + matriz[i][j];
                i++;
            }
        }
        j++;
    }

    //Somando os elementos da diagonal principal da matriz

    i = 0;
    j = 0;
    while(i < 5){
        j = 0;
        while(j < 5){
            if(i == j){
                soma_diagonal_prin = soma_diagonal_prin + matriz[i][j];
            }
            j++;
        }
        i++;
    }

    //Somando os elementos da diagonal secundária da matriz

    i = 0;
    j= 0;
    while(i < 5){
        j = 0;
        while(j < 5){
            if((i + j) == 4){
                soma_diagonal_sec = soma_diagonal_sec + matriz[i][j];
            }
            j++;
        }
        i++;
    }

    //Exibindo os dados encontrados

    cout << "Os números fornecidos para a matriz são: \n";

    for(i = 0; i < 5; i++){
        for(j = 0; j < 5; j++){
                cout << "Matriz A: [" << i << ", " << j << "] é: " << matriz[i][j] << "\n";
        }
        cout << "\n";
    }

    cout << "\nA soma de todos os elementos presentes na metriz totalizam: " << soma;
    cout << "\nA soma de todos os elementos da linha 4 da matriz totaliza: " << soma_lin4;
    cout << "\nA soma de todos os elmentos da coluna 2 da matriz totaliza: " << soma_col2;
    cout << "\nA soma de todos os elementos da diagonal principal da matriz totaliza: " << soma_diagonal_prin;
    cout << "\nA soma de  todos es elementos da diagonal secundária da matriz totaliza: " << soma_diagonal_sec;
}
