#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;

void piscina (float comprimento, float largura, float profundidade, float area, float volume)
{
    volume = (comprimento * largura * profundidade);
    area = (comprimento * largura);
}
main ()
{
    float comprimento,largura,profundidade;
    cout << "Digite o comprimento da piscina: \n";
    cin >> comprimento;
    cout <<"Digite a largura da piscina: \n";
    cin >> largura;
    cout << "Digite a profundidade da piscina \n";
    cin >> profundidade;
    piscina (comprimento,largura,profundidade, area, volume);
    cout << "O tanto de agua para esvaziar e encher a piscina e: " << volume << "\n";
    cout << "O tanto de azulejos necessario para piscina e: " << area << "\n";
}
