#include <iostream>
using namespace std;

main() {
	int N;
	int i = 2;
	int aux;
	int conta;
	cout << "Digite um numero e saiba o seu maior ou igual quadrado perfeito: \n";
    cin >> N;
    while (i <= N){
        aux = i;
        conta = aux * aux;
        i++;
    }
    cout << conta;
}
