#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void equacao (int A,int B,int C, int &x1,int &x2)
{
    int Delta = (pow(B,2) - (4*A*C));
    int conta1 = (-B - sqrt(Delta)) / 2*A;
    int conta2 = (-B + sqrt (Delta)) / 2*A;
    x1 = conta1;
    x2 = conta2;
}
main ()
{
    int A,B,C,x1,x2;
    cout << "Escreva um numero para A \n";
    cin >> A;
    cout << "Escreva um numero para B \n";
    cin >> B;
    cout << "Escreva um numero para C \n";
    cin >> C;
    equacao (A,B,C,x1,x2);
    cout << "As raizes da equacao do segundo grau sao " <<" x1 " << x1 << " e " <<" x2 " << x2;
}
