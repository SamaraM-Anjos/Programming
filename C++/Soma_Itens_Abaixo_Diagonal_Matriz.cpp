#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int matriz[4][4];
    int soma = 0;

    //Pegando os valores presentes na matriz

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cout << "Digite o valor da posição [" << i << ", " << j << "]: \n";
            cin >> matriz[i][j];
        }
    }

    //Calculando a soma dos valores abaixo da diagonal principal da matriz

    int i = 1;
    while(i < 4){
        int j = 0;
        while(j != i){
            soma = soma + matriz[i][j];
            j++;
        }
        i++;
    }
    cout << "A soma dos valores abaixo da diagonal principal da matriz é: " << soma;
}
