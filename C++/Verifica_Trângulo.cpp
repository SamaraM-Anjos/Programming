#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

bool VerificaTriangulo (int lado1, int lado2, int lado3){
    if (lado1 < (lado2 + lado3) && lado2 < (lado1 + lado2) && lado3 < (lado2 + lado1))
        return true;
    else
        return false;
}
int VerificaTipoDoTriangulo (int lado1, int lado2, int lado3){
    if (VerificaTriangulo(lado1, lado2, lado3) == false)
        return 0;
    else
        if (lado1 == lado2 and lado1 == lado3)
            return 3;
        else{
          if ((lado1 == lado2 and lado1 != lado3) or (lado2 == lado3 and lado2 != lado1) or (lado3 == lado1 and lado3 != lado2))
            return 2;
            else
                return 1;
        }
}

main(){
    setlocale(LC_ALL, "Portuguese");
    int a, b, c;
    cout << "Digite o lado A do triângulo: ";
    cin >> a;
    cout << "Digite o lado B do triângulo: ";
    cin >> b;
    cout << "Digite o lado C do triângulo: ";
    cin >> c;
    switch (VerificaTipoDoTriangulo(a,b,c)){
    case 0:
        cout << "Os dados oferecidos não formam um triângulo.";
        break;
    case 1:
        cout << "Os dados fornecidos formam um trinângulo escaleno.";
        break;
    case 2:
        cout << "Os dados fornecidos formam um triângulo isósceles.";
        break;
    case 3:
        cout << "Os dados fornecidos formam um triângulo equilátero.";
        break;
    }
}
