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
    int matriz1[qtdd_linhas][qtdd_colunas];
    int matriz2[qtdd_linhas][qtdd_colunas];
    int matriz3[qtdd_linhas][qtdd_colunas];

    //Pedindo os valores para a primeira matriz

    for(int i = 0; i < qtdd_linhas; i++){
        for(int j = 0; j < qtdd_colunas; j++){
            cout << "\nDigite um número para a linha " << i << " e a coluna: " << j << " da matriz: ";
            cin >> matriz1[i][j];
        }
    }

    //Pedindo os valores para a segunda matriz

    for(int i = 0; i < qtdd_linhas; i++){
        for(int j = 0; j < qtdd_colunas; j++){
            cout << "\nDigite um número para a linha " << i << " e a coluna: " << j << " da matriz: ";
            cin >> matriz2[i][j];
        }
    }

    //Somando as matrizes 1 e 2 em uma terceira matriz

    for(int i = 0; i < qtdd_linhas; i++){
        for(int j = 0; j < qtdd_colunas; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    //Exibindo a terceira matriz

    cout << "\nA soma de cada elemento das duas matrizes inseridas são: \n";
    for(int i = 0; i < qtdd_linhas; i++){
        for(int j = 0; j < qtdd_colunas; j++){
            cout << "A soma dos números digitados da linha: " << i << " e a coluna: " << j << " é igual a: " << matriz3[i][j] << "\n";
        }
    }
}
