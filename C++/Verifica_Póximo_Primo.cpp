#include <iostream>
using namespace std;
bool num_primo (int numero){
    int i = 1;
    int qntd_div = 0;
    while (i <= numero){
        if (numero % i == 0){
                qntd_div++;
        }
        i++;
    }
     if (qntd_div == 2){
            return 1;
        }
        else{
            return 0;
        }
}

int proximo_primo(int num){
    int i = 1;
    int qtd_divisor = 0;
    while (1){
        num++;
        if (num_primo(num)){
                return num;
        }
        i++;
    }
    if(qtd_divisor == 2){
            return num;
        }else{
            return num;
    }
}

main (){
    int num;
    cout << "Digite um numero e saiba o proximo numero primo a partir dele: \n";
    cin >> num;
    int resultado = proximo_primo(num);
    if (resultado){
        cout << "O proximo numero primo e: " << resultado;
    }
}
