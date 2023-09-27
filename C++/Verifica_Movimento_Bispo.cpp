#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int posicao_inicial_lin, posicao_inicial_col, posicao_final_lin, posicao_final_col;

    //Pegando as posições da peça

    cout << "\nDigite a posição inicial do bispo (linha): ";
    cin >> posicao_inicial_lin;
    cout << "\nDigite a posição inicial do bispo (coluna): ";
    cin >> posicao_inicial_col;
    cout << "\nDigite a posição final do bispo (linha): ";
    cin >> posicao_final_lin;
    cout << "\nDigite a posição final do bispo (coluna): ";
    cin >> posicao_final_col;

    //Testando a se as posições fornecidas são válidas

    if(posicao_inicial_lin >= 0 && posicao_inicial_lin <= 7 || posicao_final_lin >= 0 && posicao_final_lin <= 7 && posicao_final_lin >= 0 && posicao_final_lin <= 7 || posicao_final_col >= 0 && posicao_final_col <= 7){

        if((posicao_inicial_lin + posicao_inicial_col) == (posicao_final_lin + posicao_final_col) || (posicao_inicial_lin - posicao_inicial_col) == (posicao_final_lin - posicao_final_col){
            cout << "A movimentação fornecida pode ser feita.";
        }
        else{
        cout << "Posições fornecidas foram inválidas, recomece o programa.";
        }
    }
}

