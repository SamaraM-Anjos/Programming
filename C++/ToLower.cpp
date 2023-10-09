#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <string.h>
using namespace std;

//Tabela ASCII
//Maíusculas = 65 - 90
//Minúscula = 97 - 122

void Lower_Case(char palavra_original[], char palavra_modificada[]){
    int i = 0, j = 0;
    while(palavra_original[i] != '\0'){
        if(palavra_original[i] >= 'a' && palavra_original[i] <= 'z'){
            palavra_modificada[i] = palavra_original[i];
        }
        else{
            palavra_modificada[i] = palavra_original[i] + 32;
        }
        i++;
    }
}

main(){
    setlocale(LC_ALL ,"Portuguese");
    char palavra_original[100];
    cout << "Digite uma palavra: \n";
    cin >> palavra_original;
    char palavra_modificada[strlen(palavra_original)];
    Lower_Case(palavra_original, palavra_modificada);
    cout << "\nA palavra completamente em letras minúsculas é: " << palavra_modificada;
}
