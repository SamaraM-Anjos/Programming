#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

main(){
    setlocale(LC_ALL, "Portuguese");
    int tabuleiro_xadrez[8][8];
    cout << "Este programa ir� fornecer, se e somente se, uma posi��o inicial e uma posi��o final pode ser realizada pela pe�a do jogo de xadrez (Torre)";
    int posicao_inicial_lin, posicao_inicial_col, posicao_final_lin, posicao_final_col;

    //Pegando as posi��es inciais e finais para verifica��es futuras

    cout << "\nDigite a posi��o inicial da torre, na linha (0 at� 7): ";
    cin >> posicao_inicial_lin;
    cout << "\nDigite a posi��o inicial da torre, na coluna (0 at� 7): ";
    cin >> posicao_inicial_col;
    cout << "\nDigite a posi��o final da torre, na linha (0 at� 7): ";
    cin >> posicao_final_lin;
    cout << "\nDigit a posi��o final da torre, na coluna (0 at� 7): \n";
    cin >> posicao_final_col;

    //Verificando se as posi��es s�o do tamanho do tabuleiro

    while(posicao_inicial_lin < 0 || posicao_inicial_lin > 7){
        cout << "Posi��o inicial inv�lida.\n";
        cout << "\nDigite a posi��o inicial da torre, na linha (0 at� 7): ";
        cin >> posicao_inicial_lin;
    }
    while(posicao_inicial_col < 0 || posicao_inicial_col > 7){
        cout << "Posi��o inicial inv�lida.\n";
        cout << "\nDigite a posi��o inicial da torre, na coluna (0 at� 7): ";
        cin >> posicao_inicial_col;
    }
    while(posicao_final_lin < 0 || posicao_final_lin > 7){
        cout << "Posi��o inicial inv�lida.\n";
        cout << "\nDigite a posi��o final da torre, na linha (0 at� 7): ";
        cin >> posicao_final_lin;
    }
    while(posicao_final_col < 0 || posicao_final_col > 7){
        cout << "\nPosi��o inicial inv�lida.\n";
        cout << "\nDigite a posi��o final da torre, na coluna (0 at� 7): ";
        cin >> posicao_final_col;
    }

    //Verificando se � poss�vel realizar a movimenta��o da pe�a

    if(posicao_inicial_lin == posicao_final_lin || posicao_inicial_col == posicao_final_col){
        cout << "O moviento pode ser realizado.\n";
    }
    else{
        cout << "O movimento n�o poder� ser realizado.\n";
    }
}
