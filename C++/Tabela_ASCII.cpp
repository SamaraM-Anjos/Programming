#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string.h>
using namespace std;

void Tabela_ASCII (char tabela[], int tamanho){
    int i = 0;
    int num = 0;
    while(i < tamanho){
        tabela[i] = num;
        num++;
        i++;
    }
}

main(){
    setlocale(LC_ALL, "Portuguese");
    int tamanho = 225;
    char tabela[tamanho];
    Tabela_ASCII(tabela, tamanho);
    int i = 0;
    while(i < tamanho){
        cout << "\n Símbolo: " << i << " da tabela é: " << tabela[i];
        i++;
    }
}
