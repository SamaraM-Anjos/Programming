#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

main(){
    const int tam_vetor = 13;
    int bilhete_loteria [tam_vetor];

    // Armazenando o valor do bilhete da loteria
    srand(time(NULL));
    for(int i = 0; i < tam_vetor; i++){
        int valor;
        valor = rand() % 3 + 1;
        bilhete_loteria[i] = valor;
    }

    // Pedindo os valores necessarios para o apostador

    int bilhete_apostador [tam_vetor];
    for(int i = 0; i < tam_vetor; i++){
        int aposta;
        cout << "Digite suas apostas, valores permitidos para apostar: 1 (Coluna 1), 2 (Coluna 2) ou 3 (Coluna do meio)";
        cin >> aposta;
        bilhete_apostador[i] = aposta;
    }

    // Verificação do resultado, para saber a quantidade de acertos do apostador

    int acertos = 0;

    for(int i = 0; i < tam_vetor; i++){
        if(bilhete_loteria[i] == bilhete_apostador[i]){
            acertos++;
        }
    }
    if(acertos == 13){
        cout << "A sua quantidade de acertos foram: " << acertos << "/13.";
        cout << "GANHADOR, PARABENS";
    }
    else{
        cout << "A sua quantidade de acertos foram: " << acertos << "/13.";
        cout << "Infelizmente voce nao ganhou, tente novamente";
    }
}
