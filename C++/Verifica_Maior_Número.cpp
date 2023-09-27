#include <iostream>
using namespace std;

float numeroMaior (float X, float Y)
{
    float resultado=Y;
    if (X > Y)
    {
        resultado= X;
    }
    return resultado;
}
main ()
{
    float X,Y,Z;
    cout << "Digite um numero \n";
    cin >> X;
    cout <<"Digite outro numero \n";
    cin >> Y;
    float resultado=numeroMaior(X,Y);
    if (numeroMaior(X,Y))
    {
        cout << "O maior numero escolhido e: \n" << resultado;
    }
}
