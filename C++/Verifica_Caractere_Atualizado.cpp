#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

bool verifica_vogal(char x){
    if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U'){
        return 1;
    }
    else{
        return 0;
    }
}
bool verifica_algarismo(char x){
    if(x >= 0 && x <= 9){
        return 1;
    }
    else{
        return 0;
    }
}
bool verifica_letra_min(char x){
    if(x >= 'a' && x <= 'z'){
        return 1;
    }
    else{
        return 0;
    }
}

bool verifica_letra_mai(char x){
    if(x >= 'A' && x <='Z'){
        return 1;
    }
    else{
        return 0;
    }
}

bool verifica_letra(char x){
    if(verifica_letra_mai(x) || verifica_letra_min(x)){
        return 1;
    }
    else{
        return 0;
    }
}

bool verifica_consoante(char x){
    if(verifica_letra(x) && verifica_vogal (x) == 0){
        return 1;
    }
    else{
        return 0;
    }
}

bool verifica_par(char x){
    if(verifica_algarismo(x) && x % 2 == 0){
        return 1;
    }
    else{
        return 0;
    }
}
main(){
    setlocale(LC_ALL, "Portuguese");
    char x;
    cout << "Este programa ir� dizer se um caractere digitado � Vogal ou Algarismo ou Letra mai�scula ou Letra min�scula ou Letra ou Consoante.\n";
    cout << "\nDigite um caractere: \n";
    cin >> x;

    cout << "� VOGAL? " << verifica_vogal(x);
    cout << "\n� ALGARISMO? " << verifica_algarismo (x);
    cout << "\n� LETRA MIN�SCULA? " << verifica_letra_min(x);
    cout << "\n� LETRA MAI�SCULA? " << verifica_letra_mai (x);
    cout << "\n� LETRA? " << verifica_letra(x);
    cout << "\n� CONSOANTE? " << verifica_consoante(x);
    cout << "\n� PAR? " << verifica_par(x);
}
