#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int li, lf, ci, cf;
    cout << "Digite a posição inicial do cavalo (linha): ";
    cin >> li;
    cout << "\nDigite a posição inicial do cavalo (coluna): ";
    cin >> ci;
    cout << "\nDigite a posição final do cavalo (linha): ";
    cin >> lf;
    cout << "\nDigite a posição final do cavalo (coluna): ";
    cin >> cf;

    if(li >= 0 && li <= 7 || lf >= 0 && lf <= 7 || cf >= 0 && cf <= 7){
       if(((lf == li + 1 || lf == li + 1) && (cf == ci - 2 || cf == ci + 2) || (lf == li - 2 || lf == li + 2) && (cf == ci - 1 || cf == ci + 1))){
            cout << "A movimentaçao poderá ser realizada.";
        }
        else{
            cout << "A posição não poderá ser realizada.";
        }

    }
    else{
        cout << "Não é uma posição válida.";
    }
}
