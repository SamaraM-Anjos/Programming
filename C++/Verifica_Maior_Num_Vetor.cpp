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

    //Coletando os n�meros do vetor;

    for(int i = 0; i < tamanho; i++){
        cout << "\nDigite um numero: ";
        cin >> vetor[i];
    }

    //Exibi��o

    int resultado = VerificaMaiorNumeroDoVetor(vetor, tamanho);
    cout << "O maior n�mero presente no vetor �:�"�<<�resultado;
