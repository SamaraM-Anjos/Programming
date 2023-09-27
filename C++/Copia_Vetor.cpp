#include<iostream>
using namespace std;

int main()
{
    int tam_vetor;
    int vetor1 [tam_vetor];
    int vetor2 [tam_vetor];
    cout << "Insira o tamanho do vetor:\n";
    cin >> tam_vetor;
    for(int i = 0; i < tam_vetor; i++){
        int num;
        cout << "Digite o valor de cada posicao do vetor: \n";
        cin >> num;
        vetor1[i] = num;
        for(int i =0; i < tam_vetor; i++){
            vetor2[i] = vetor1[i];
        }
    }
    cout << "Os valores do primeiro vetor copiados em outro sao:\n";
    for(int i = 0; i < tam_vetor; i++){
        cout << vetor2[i] << "\n";
    }
}
