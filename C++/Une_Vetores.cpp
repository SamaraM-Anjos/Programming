#include <iostream>
using namespace std;

int main(){
	int tam_vetor;
    cout << "Digite o tamanho dos vetores: \n";
    cin >> tam_vetor;

    int vetor1[tam_vetor];
    int vetor2[tam_vetor];

    //Coletando os dados dos vetores

    for(int i = 0; i < tam_vetor; i++){
    	int num;
        cout << "Digite os numeros para o primeiro vetor:\n";
        cin >> num;
        vetor1[i] = num;
    }
    for(int i = 0; i < tam_vetor; i++){
    	int num;
        cout << "Digite os numeros do segundo vetor:\n";
        cin >> num;
        vetor2[i] = num;
    }

    // Parte da união dos vetores 1 e 2

    int tam_vetor2 = tam_vetor * 2;
    int vetor3[tam_vetor2];
    for(int i = 0; i < tam_vetor; i++){
    	vetor3[i] = vetor1[i];
    }

    for(int i = 0; i < tam_vetor2; i++){
    	int parte = tam_vetor++;
		vetor3[parte] = vetor2[i];
    }
   cout << "Os numeros armazenados sao:\n";
    for(int i = 0; i < tam_vetor2; i++){
    	cout << vetor3[i] << "\n";
    }
}
