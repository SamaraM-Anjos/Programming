#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

int MaiorNumero(int num1, int num2){
    if(num1 >= num2){
        int maior_numero = num1;
        return maior_numero;
    }
    else {
        int maior_numero = num2;
        return maior_numero;
    }
}

int MaiorNumeroDe3(int num1, int num2, int num3){
    if(MaiorNumero(num1,num2) <= num3){
        return num3;
    }
    else{
        return MaiorNumero(num1,num2);
    }
}

main(){
    setlocale(LC_ALL, "Portuguese");
    int x,y,z;
    cout << "Digite um número: ";
    cin >> x;
    cout << "\nDigite outro número: ";
    cin >> y;
    cout << "\nDigite outro número: ";
    cin >> z;
    int maior_numero = MaiorNumero(x,y);
    cout << "O maior número entre: " << x << " e " << y << " é: " << maior_numero;
    int maior_numero_de3  = MaiorNumeroDe3(x,y,z);
    cout << "\nO maior número entre: " << x << ", " << y << " e " << z << " é: " << maior_numero_de3;
}
