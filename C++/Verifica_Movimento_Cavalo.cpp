#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");

    int li, lf, ci, cf;
    cout << "Digite a posi��o inicial do cavalo (linha): ";
    cin >> li;
    cout << "\nDigite a posi��o inicial do cavalo (coluna): ";
    cin >> ci;
    cout << "\nDigite a posi��o final do cavalo (linha): ";
    cin >> lf;
    cout << "\nDigite a posi��o final do cavalo (coluna): ";
    cin >> cf;

    if(li >= 0 && li <= 7 || lf >= 0 && lf <= 7 || cf >= 0 && cf <= 7){
       if(((lf == li + 1 || lf == li + 1) && (cf == ci - 2 || cf == ci + 2) || (lf == li - 2 || lf == li + 2) && (cf == ci - 1 || cf == ci + 1))){
            cout << "A movimenta�ao poder� ser realizada.";
        }
        else{
            cout << "A posi��o n�o poder� ser realizada.";
        }

    }
    else{
        cout << "N�o � uma posi��o v�lida.";
    }
}
