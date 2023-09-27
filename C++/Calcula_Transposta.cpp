#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int qtdd_linhas, qtdd_colunas;
    cout << "Digite a quantidade de linhas da Matriz:\n";
    cin >> qtdd_linhas;
    cout << "Digite a quantidade de colunas da Matriz:\n";
    cin >> qtdd_colunas;
    int matriz1[qtdd_linhas][qtdd_colunas];
    int matriz2[qtdd_colunas][qtdd_linhas];

    //Coletando os valores que estarão na matriz

    for(int i = 0; i < qtdd_linhas; i++){
        for(int j = 0; j < qtdd_colunas; j++){
            cout << "Digite um número para a posição [ " << i << ", " << j << " ] da matriz A: ";
            cin >> matriz1[i][j];
        }
    }

    //Fazendo a transposta em uma nova matriz

    for(int i =0; i < qtdd_colunas; i++){
        for(int j = 0; j < qtdd_linhas; j++){
            matriz2[i][j] = matriz1[j][i];
        }
    }

    //Exibindo

    cout << "Matriz transposta fica: \n";

     for(int i =0; i < qtdd_colunas; i++){
        for(int j = 0; j < qtdd_linhas; j++){
            cout << "Matriz 2, posição [ "<< i << ", " << j << " ] é: " << matriz2[i][j] << "\n";
        }
     }
        cout << "\n";
}
