#include <iostream>
#include <math.h>
using namespace std;

int divisao (int x, int y)
{
    int resultado=false;
    int conta= (x % y == 0);
    if (conta)
    {
        resultado = true;
    }
    return resultado;
}
int numero(int X,int Y)
{
    int resultado;
    int conta= (X%2 == 0);
    int conta2= (Y%2 == 0);
    if (conta)
    {
        resultado= true;
    }
    else
    {
        resultado=false;
    }
    if (conta2)
    {
        resultado= true;
    }
    else
    {
        resultado = false ;
    }
    return resultado;
}
main()
{
    int X,Y;
    cout << "Digite um numero: \n";
    cin >> X;
    cout << "Digite outro numero: \n";
    cin >> Y;
    if (divisao (X,Y))
        {
            cout << "O numero que voce escolheu e divisivel pelo outro numero escolhido: \n";
        }
    else
        {
            cout << "O numero que voce escolheu nao e divisivel pelo outro numero escolhido: \n";
        }
    if (numero (X,Y))
    {
        cout << "Um dos numeros escolhidos e par \n";
    }
    else
    {
        cout <<"Um dos numeros escolhidos e impar \n";
    }
}
