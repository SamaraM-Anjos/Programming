#include <iostream>
#include <conio.h>
using namespace std;

bool letraMinuscula (char carac)
{
    bool resultado= false;
    bool caractere= (carac >= 'a' && carac <= 'z');
    if (caractere)
    {
        resultado=true;
    }
    return resultado;
}
bool letraMaiuscula (char carac)
{
    bool resultado=false;
    bool caractere= (carac >= 'A' && carac <= 'Z');
    if (caractere)
    {
        resultado=true;
    }
    return resultado;
}
bool caracLetra(char carac)
{
    bool resultado=false;
    bool caractere= (letraMinuscula(carac) || letraMaiuscula (carac));
    if (caractere)
    {
        resultado=true;
    }
    return resultado;
}
bool vogal (char carac)
{
    bool resultado=false;
    bool caractere= (carac == 'a' || carac == 'e' || carac == 'i' || carac == 'o' || carac == 'u' || carac == 'A' || carac == 'E' || carac == 'I' || carac == 'O' || carac == 'U');
    if (caractere)
    {
        resultado=true;
    }
    return resultado;
}
bool consoante (char carac)
{
    bool resultado=false;
    bool caractere= (caracLetra(carac) && ! vogal(carac));
    if (caractere)
    {
        resultado=true;
    }
    return resultado;
}
bool algarismo (char carac)
{
    bool resultado=false;
    bool caractere = (carac >='0' && carac <='9');
    if (caractere)
    {
        resultado=true;
    }
    return resultado;
}

main ()
{
    char X;
    cout << "Digite um caractere \n";
    cin >> X;
    if (letraMinuscula (X))
    {
        cout << "O caractere digitado e uma letra minuscula \n";
    }
    else
    {
        cout << "O caractere digitado nao e uma letra minuscula \n";
    }
    if (letraMaiuscula (X))
    {
        cout << "O caractere digitado e uma letra maiuscula \n";
    }
    else
    {
        cout << "O caractere digitado nao e uma letra maiuscula\n";
    }
    if (caracLetra (X))
    {
        cout << "O caractere digitado e uma letra \n";
    }
    else
    {
        cout << "O caractere digitado nao e uma letra \n";
    }
    if (vogal (X))
    {
        cout << "O caractere digitado e uma vogal \n";
    }
    else
    {
        cout << "O caractere digitado nao e uma vogal \n";
    }
    if (consoante (X))
    {
        cout << "O caractere digitado e uma consoante \n";
    }
    else
    {
        cout << "O caractere digitado nao e uma consoante \n";
    }
    if (algarismo (X))
        {
            cout << "O caractere digitado e um algarismo \n";
        }
    else
        {
            cout << "O caractere digitado nao e um algarismo \n";
        }
}
