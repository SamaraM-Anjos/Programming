#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

void MultiplicaVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] * i;
    }
}


main(){
    setlocale(LC_ALL, "Portuguese");
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    int vetor[tamanho];

    //Coletando os n�meros do vetor;

    for(int i = 0; i < tamanho; i++){
        cout << "\nDigite um numero: ";
        cin >> vetor[i];
    }

    //Exibi��o

    MultiplicaVetor(vetor, tamanho);

    for(int i = 0; i < tamanho; i++){
        cout << vetor[i] << "\n";
    }
}
