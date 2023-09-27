#include <iostream>
using namespace std;

main()
{
	int tam_vetor1;
	int tam_vetor2;

	cout << "Digite o tamanho dos vetores:\n";
	cin >> tam_vetor1;

	int vetor1 [tam_vetor1];
	int vetor2 [tam_vetor1];

	for(int i = 0; i < tam_vetor1; i++){
	    int num1;
	    cout << "Digite o valor para o primeiro vetor:\n";
	    cin >> num1;
	    vetor1[i] = num1;
	    }
    for(int i = 0; i < tam_vetor1; i++){
        int num2;
        cout << "Digite o valor para o segundo vetor:\n";
        cin >> num2;
        vetor2[i] = num2;
        }
    tam_vetor2 = tam_vetor1;
    int vetor3 [tam_vetor2];
        for(int i = 0; i < tam_vetor2; i++){
           vetor3[i] = vetor1[i] + vetor2[i];
        }
        cout << "Os elementos armazenados sao: \n";
        for(int i = 0; i < tam_vetor2; i++){
            cout << vetor3[i] << "\n";
    }
}
