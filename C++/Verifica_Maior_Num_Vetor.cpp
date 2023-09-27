#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

int VerificaMaiorNumeroDoVetor(int vetor[], int tamanho){
    int maior_numero = 0;
    for(int i = 0; i < tamanho; i++){
        if (vetor[i] > maior_numero){
            maior_numero = vetor[i];

        }
    }
    return maior_numero;
}


main(){
    setlocale(LC_ALL, "Portuguese");
    int tamanho;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho;
    int vetor[tamanho];

    //Coletando os números do vetor;

    for(int i = 0; i < tamanho; i++){
        cout << "\nDigite um numero: ";
        cin >> vetor[i];
    }

    //Exibição

    int resultado = VerificaMaiorNumeroDoVetor(vetor, tamanho);
    cout << "O maior número presente no vetor é: " << resultado;
