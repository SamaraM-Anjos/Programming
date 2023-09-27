import os
os.system('cls')

def RetornaMaiorNumero (num1,num2):
    if num1 >= num2:
        maiornumero = num1;
        return maiornumero;
    else:
        maiornumero = num2;
        return maiornumero;

def MaiorNumeroDeTres (num1,num2,num3):
    if RetornaMaiorNumero(num1,num2) <= num3:
        return num3;
    else:
        return RetornaMaiorNumero(num1,num2);

print('Este programa irá mostrar o maior número fornecido.');

x = int(input('Digite um número: '));
y = int(input('Digite outro número: '));
z = int(input('Digite outro número: '));

maior_numero = RetornaMaiorNumero(x,y);

print(f'O maior numero entre: {x} e {y} é: {maior_numero}');

maior_numero_de3 = MaiorNumeroDeTres(x,y,z);

print(f'O maior número entre: {x}, {y} e {z} é: {maior_numero_de3}');

