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

    //Intercalando os vetores

    int tam_vetor2 = tam_vetor * 2;
    int vetor3[tam_vetor2];
    int sucessor = 1;
    int antecessor = 0;

    for(int i = 0; i < tam_vetor2; i++){
		vetor3[antecessor] = vetor1[i];
        antecessor = antecessor + 2;
		vetor3[sucessor] = vetor2[i];
        sucessor = sucessor + 2;

    }
    cout << "Intercalando os vetores fica: \n";
    for(int i = 0; i < tam_vetor2; i++){
    	cout << vetor3[i] << "\n";
    }
}
