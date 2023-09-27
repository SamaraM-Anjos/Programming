#include <iostream>
#include <conio.h>
using namespace std;

bool letra (char carac)
{
    if (carac >= 'a' &&  carac <= 'z' )
    {
            return  (carac - 'a' + 1);
    }
    else
    {
        if  (carac >='A' && carac <= 'Z')
        {
            return (carac - 'A'  + 1);
        }
    }
    return 0;
}
main ()
{
    char carac;
    cout << "Digite uma letra :\n";
    cin >> carac;
    if (letra (carac) != 0)
    {
        cout << "A posicao da letra e :" << letra(carac);
    }
        else
        {
            cout << "O caractere digitado nao e uma letra";
        }
    }

