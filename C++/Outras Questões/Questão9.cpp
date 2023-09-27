#include <iostream>
using namespace std;

//Função para dizer qual número é maior

void menorMaior(int &num1, int &num2){
    int menor_num;
    if (num1 < num2){
        menor_num = num1;
        num1 = num2;
        num2 = menor_num;
    }
    else{
        num1 = num1;
        num2 = num2;
    }
}

//Função para dizer a quantidade de divisores de um número

int quantidadeDeDivisores(int num){
    int qtdd_divisores = 0;
    for(int i = 1; i <= num; i++){
        if (num % i == 0){
            qtdd_divisores++;
        }
    }
    return qtdd_divisores;
}

//Função para verificar se um número é primo ou não

bool primo(int numero){
    if(quantidadeDeDivisores(numero) == 2){
        return 1;
    }
    else{
        return 0;
    }
}

//Função para retornar o menor divisor primo de um número

/*int menorDivisorPrimo(int num){
    int menor_primo = 0;
    int maior_primo;
    if(num == 1){
        return num;
    }
    else{
        for(int i = 2; i <= num; i++){
            maior_primo = i;
            if(primo(i)){
                if(num % i == 0){
                    if(menor_primo > maior_primo || menor_primo == 0){
                        menor_primo = maior_primo;
                    }
                }
            }
        }
    }
    return menor_primo;
}
}*/
int menorDivisorPrimo(int num){
    int menor_primo;
    if(num == 1){
        return num;
    }
    else{
        for(int i = 2; i <= num; i++){
            if(primo(i)){
                if(num % i == 0){
                     return i;
                }
            }
        }
    }
}

//Função para calcular mmc

int mmc(int &a, int &b){
    int mmc_resultado = 1;
    int divisor;
    if(a <= b){
        if(a == 1 && b == 1){
            return mmc_resultado;
        }
        else{
           while(a != 1 && b != 1){
             if(menorDivisorPrimo(a) >= menorDivisorPrimo(b)){
                divisor = menorDivisorPrimo(a);
            }
            else{
                divisor = menorDivisorPrimo(b);
            }
                while (a % divisor == 0){
                    mmc_resultado = mmc_resultado * divisor;
                    a = a / divisor;

                }
                while(b % divisor == 0){
                    mmc_resultado = mmc_resultado * divisor;
                    b = b / divisor;
                }
                if(a % divisor != 0 || b % divisor != 0){

                }
           }
        }
        return mmc_resultado;
    }
}

main(){
    int num1, num2;
    cout << "Digite um numero: \n";
    cin >> num1;
    cout << "Digite outro numero: \n";
    cin >> num2;
    int resultado = mmc(num1,num2);
    cout << resultado;
}
