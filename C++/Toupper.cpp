#include <iostream>
#include <string.h>
#include <locale.h>
#include <stdio.h>
using namespace std;

//Tabela ASCII
//Maíusculas = 65 - 90
//Minúscula = 97 - 122

void Upper_Case(char palavra_original[], char palavra_modificada[]){
    int i = 0;
    while(palavra_original[i] != '\0'){
        if(palavra_original[i] >= 'A' && palavra_original[i] <= 'Z'){
            palavra_modificada[i] = palavra_original[i];
        }
        else{
            palavra_modificada[i] = palavra_original[i] - 32;
        }
        i++;
    }
}

main(){
    //Melhorar o código: mudar o primeiro vetor para uma string, depois pegar o seu valor e armazenar no vetor, depois transferir para o vetor o seu valor
    setlocale(LC_ALL, "Portuguese");
    char palavra[100];
    cout << "Digite uma palavra: ";
    cin >> palavra;
    char palavra2[strlen(palavra)];
    Upper_Case(palavra, palavra2);
    cout << "A palavra: " << palavra << " em letras totalmente maiúsculas é: " << palavra2;
}
