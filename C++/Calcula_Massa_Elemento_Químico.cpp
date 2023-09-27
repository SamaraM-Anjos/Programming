#include <iostream>
using namespace std;

main(){
    float massa;
    int segundos = 1;
    float conta;
    cout << "Digite a massa do material radioativo e saiba em quanto tempo ele tera sua massa menor que 0,05 gramas: \n";
    cin >> massa;
    while (massa > 0.05){
        massa = massa/2;
        segundos++;
    }
    segundos = segundos * 50;
    cout << "O tempo que levara em segundos e: \n" << segundos;
}
