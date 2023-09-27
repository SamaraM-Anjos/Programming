#include <iostream>
#include <math.h>
using namespace std;

//Samara M. dos Anjos 1º INFO


//Função para verificar se o número é primo

bool verifica_primo (int num){
	int qtdd_divisor = 0;
	for (int i = 1; i <= num; i++){

        if (num % i == 0){
        	qtdd_divisor++;
        }
    }

	if(qtdd_divisor == 2){
    	return 1;
    }
    else{
   	return 0;
    }
}

//Função para dizer o próximo numero primo

int proximo_primo(int &num){
	num = num + 1;
    while (verifica_primo(num) == 0){
    	num = num + 1;
    }
    return num;
}

//Função para calcular o mdc entre dois números

int calcula_mdc(int &num1, int &num2){
	int mdc = 1;
	int divisor = 2;
    while(num1 != 1 || num2 != 1){
        while(num1 % divisor == 0 || num2 % divisor == 0){
            if(num1 % divisor == 0 && num2 % divisor == 0){
                mdc = mdc * divisor;
            }
            if(num1 % divisor == 0 && num2 % divisor != 0){
                    num1 = num1 / divisor;
            }
            else{
                num2 = num2 / divisor;
            }
        }
        if(num1 % divisor != 0 && num2 % divisor != 0){
            divisor = proximo_primo(divisor);
        }
    }
    return mdc;
}

main(){
    int num1;
    int num2;
    cout << "-Este programa ira dizer o MDC de dois numeros-\n\n";
    cout << "Digite o primeiro numero: \n";
    cin >> num1;
    cout << "\nDigite o segundo numero:\n";
    cin >> num2;

    int resultado = calcula_mdc (num1,num2);

    cout << "\nO MDC dos numeros e igual a: " << resultado;
}
