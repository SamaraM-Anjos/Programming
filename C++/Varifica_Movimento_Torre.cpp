#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int tabuleiro_xadrez[8][8];
    cout << "Este programa irá fornecer, se e somente se, uma posição inicial e uma posição final pode ser realizada pela peça do jogo de xadrez (Torre)";
    int posicao_inicial_lin, posicao_inicial_col, posicao_final_lin, posicao_final_col;

    //Pegando as posições inciais e finais para verificações futuras

    cout << "\nDigite a posição inicial da torre, na linha (0 até 7): ";
    cin >> posicao_inicial_lin;
    cout << "\nDigite a posição inicial da torre, na coluna (0 até 7): ";
    cin >> posicao_inicial_col;
    cout << "\nDigite a posição final da torre, na linha (0 até 7): ";
    cin >> posicao_final_lin;
    cout << "\nDigit a posição final da torre, na coluna (0 até 7): \n";
    cin >> posicao_final_col;

    //Verificando se as posições são do tamanho do tabuleiro

    while(posicao_inicial_lin < 0 || posicao_inicial_lin > 7){
        cout << "Posição inicial inválida.\n";
        cout << "\nDigite a posição inicial da torre, na linha (0 até 7): ";
        cin >> posicao_inicial_lin;
    }
    while(posicao_inicial_col < 0 || posicao_inicial_col > 7){
        cout << "Posição inicial inválida.\n";
        cout << "\nDigite a posição inicial da torre, na coluna (0 até 7): ";
        cin >> posicao_inicial_col;
    }
    while(posicao_final_lin < 0 || posicao_final_lin > 7){
        cout << "Posição inicial inválida.\n";
        cout << "\nDigite a posição final da torre, na linha (0 até 7): ";
        cin >> posicao_final_lin;
    }
    while(posicao_final_col < 0 || posicao_final_col > 7){
        cout << "\nPosição inicial inválida.\n";
        cout << "\nDigite a posição final da torre, na coluna (0 até 7): ";
        cin >> posicao_final_col;
    }

    //Verificando se é possível realizar a movimentação da peça

    if(posicao_inicial_lin == posicao_final_lin || posicao_inicial_col == posicao_final_col){
        cout << "O moviento pode ser realizado.\n";
    }
    else{
        cout << "O movimento não poderá ser realizado.\n";
    }
}
