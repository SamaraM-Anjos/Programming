#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int posicao_inicial_lin, posicao_inicial_col, posicao_final_lin, posicao_final_col;

    //Pegando as posi��es da pe�a

    cout << "\nDigite a posi��o inicial do bispo (linha): ";
    cin >> posicao_inicial_lin;
    cout << "\nDigite a posi��o inicial do bispo (coluna): ";
    cin >> posicao_inicial_col;
    cout << "\nDigite a posi��o final do bispo (linha): ";
    cin >> posicao_final_lin;
    cout << "\nDigite a posi��o final do bispo (coluna): ";
    cin >> posicao_final_col;

    //Testando a se as posi��es fornecidas s�o v�lidas

    if(posicao_inicial_lin >= 0 && posicao_inicial_lin <= 7 || posicao_final_lin >= 0 && posicao_final_lin <= 7 && posicao_final_lin >= 0 && posicao_final_lin <= 7 || posicao_final_col >= 0 && posicao_final_col <= 7){

        if((posicao_inicial_lin + posicao_inicial_col) == (posicao_final_lin + posicao_final_col) || (posicao_inicial_lin - posicao_inicial_col) == (posicao_final_lin - posicao_final_col){
            cout << "A movimenta��o fornecida pode ser feita.";
        }
        else{
        cout << "Posi��es fornecidas foram inv�lidas, recomece o programa.";
        }
    }
}

