#include <iostream>
using namespace std;

int anguloTriangulo (int a, int b, int c){
    if ((a+b+c) > 180){
        return 0;
    }
    else{
        if (a < 90 && b < 90 && c < 90){
            return 1;
        }
    else{
        if (a == 90 || b == 90 || c == 90){
            return 2;
        }
    else{
        if (a > 90 || b > 90 || c > 90){
            return 3;
            }
        }
    }
     }
}
int main()
{
	int a, b, c;
	cout << "Digite o angulo X do triangulo: \n";
	cin >> a;
	cout << "Digite o angulo Y do triangulo: \n" ;
	cin >> b;
	cout << "Digite o angulo Z do triangulo :\n";
	cin >> c;
	int resultado = anguloTriangulo (a,b,c);
	switch (resultado){
	    case 0:
	    cout << "Os angulos digitados nao formam um triangulo";
	    break;
	    case 1:
	    cout << "O triangulo formado e um triangulo Acutangulo";
	    break;
	    case 2:
	    cout << "O triangulo formado e um triangulo Retangulo";
	    break;
	    case 3:
	    cout << "O triangulo formado e um triangulo Obtusangulo";
	    break;
	}
}
