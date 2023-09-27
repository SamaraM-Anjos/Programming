#include <iostream>
#include <locale.h>
#include <stdio.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int tamanho_do_vetor;
    cout << "Digite o tamanho do vetor: ";
    cin >> tamanho_do_vetor;
    int vetor1[tamanho_do_vetor];
    int vetor2 [tamanho_do_vetor];
    for (int i = 0; i < tamanho_do_vetor; i++){
        int num;
        cout << "Digite um numero: ";
        cin >> num;
        vetor1[i] = num;
    }
    int j = tamanho_do_vetor - 1;
    for (int i = 0; i < tamanho_do_vetor; i++){
        vetor2[i] = vetor1[j];
        j--;
    }
    cout << "O vetor, digitado, de forma invertida fica: \n";
    for(int i = 0; i < tamanho_do_vetor; i++){
        cout << vetor2[i] << "\n";
    }
}
