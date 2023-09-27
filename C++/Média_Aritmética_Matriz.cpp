#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int qtdd_linhas;
    int qtdd_colunas;
    cout << "\nDigite a quantidade de linhas da matriz: ";
    cin >> qtdd_linhas;
    cout << "\nDigite a quantidade de colunas da matriz: ";
    cin >> qtdd_colunas;
    int matriz[qtdd_linhas][qtdd_colunas];
    float soma_valores = 0;
    float soma_lin_col = qtdd_linhas + qtdd_colunas;
    float media_aritimetica = 0;

    //Pedindo os valores para a primeira matriz

    for(int i = 0; i < qtdd_linhas; i++){
        for(int j = 0; j < qtdd_colunas; j++){
            cout << "\nDigite um número para a linha " << i << " e a coluna: " << j << " da matriz: ";
            cin >> matriz[i][j];
            soma_valores = soma_valores + matriz[i][j];
        }
    }
    media_aritimetica = soma_valores / soma_lin_col;

    //Exibindo a soma de todos os elementos da matriz

    cout << "\nA soma de todos os elementos da matriz fornecida é: " << media_aritimetica;
}
