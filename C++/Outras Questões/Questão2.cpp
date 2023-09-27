#include <iostream>
#include <string>
using namespace std;

/* Em uma competição de ginástica, cada atleta recebe votos de sete jurados. A melhor e a pior nota são eliminadas. A sua nota fica sendo a média dos votos restantes.

Você deve fazer um programa que receba o nome do ginasta e as notas dos sete jurados alcançados pelo atleta em sua apresentação e depois informe a sua média, conforme a descrição acima comemorado
retirar o melhor e o pior salto e depois calcular a média com as notas restantes).

As notas não são armazenadas ordenadas. Um exemplo de saída do programa deve ser conforme o exemplo abaixo: Atleta: Aparecido Parente Nota: 9.9 Nota: 7.5 Nota: 9.5 Nota: 8.5 Nota: 9.0 Nota: 8.5 Nota: 9.7
*/

 main (){
    int i = 1;
    float nota;
    float aux;
    string atleta;
    float maior_nota = 0;
    float menor_nota = 0;
    float media_nota;
    cout << "Digite o nome do atleta: \n";
    cin >> atleta;

    while(i <= 7){
        cout << "Digite a nota do " << i << " jurado \n";
        cin >> nota;

        if(nota > maior_nota){
            maior_nota = nota;
        }
        if (nota < menor_nota || i == 1){
            menor_nota = nota;
        }
        aux = aux + nota;
        media_nota = (aux - (maior_nota + menor_nota)) / 5;
        i++;
    }
    cout << "O(a) atleta " << atleta << " apresenta a media de suas notas igual a: " << media_nota;
}
