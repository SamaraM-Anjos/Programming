#include <iostream>
#include <conio.h>
using namespace std;

 int numeroPrimo (int n){
    int i=2;
    int j = 0;
    while(i <= n){
        if(n % i == 0){
            j++;
        }
        i++;
    }
    if( j == 1){
        return 1;
    }else{
        return 0;
    }

}
 main (){
    int n;
    cout << "Digite um numero para saber se ele e primo: \n";
    cin >> n;
    numeroPrimo(n);
    if (numeroPrimo(n)){
        cout << "O numero digitado e primo";
    }
    else{
        cout << "O numero digitado nao e primo";
    }
    getch();
 }

