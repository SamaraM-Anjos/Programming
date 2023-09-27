#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int qtdd_linhas = 2;
    int qtdd_colunas = 3;
    int matriz[qtdd_linhas][qtdd_colunas];
    int soma = 0;

    //Pedindo os valores para a matriz

    for(int i = 0; i < qtdd_linhas; i++){
        for(int j = 0; j < qtdd_colunas; j++){
            cout << "\nDigite um número para a linha " << i << " e a coluna: " << j << " da matriz: ";
            cin >> matriz[i][j];
            soma = soma + matriz[i][j];
        }
    }

    //Exibindo a soma de todos os elementos da matriz

    cout << "\nA soma de todos os elementos da matriz fornecida é: " << soma;
}

