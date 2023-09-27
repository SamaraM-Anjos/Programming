#include <iostream>
using namespace std;

float conversor_temperatura (float celcius){
        float fahrenheit = 1.8 * celcius + 32;
        return fahrenheit;
}

main(){
    float celcius;
    cout << "Digite a temperatura em Graus Celcius para converter em Fahrenheit: \n";
    cin >> celcius;
    float resultado = conversor_temperatura(celcius);
    cout << "A temperatura digitada em Fahreinheit e: " << resultado;
}
