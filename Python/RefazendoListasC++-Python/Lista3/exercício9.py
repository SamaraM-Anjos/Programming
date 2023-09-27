import os
os.system('cls')

def CalculaAdicao (n1,d1,n2,d2):
    numerador = n1 * d2 + n2 * d1;
    denominador = d1 * d2;
    return numerador, denominador; #Tupla

def CalculaSubtracao (n1,d1,n2,d2):
    numerador = n1 * d2 - n2 * d1;
    denominador = d1 * d2;
    return numerador, denominador;

def CalculaMultiplicacao (n1,d1,n2,d2):
    numerador = n1 * n2;
    denominador = d1 * d2;
    return numerador, denominador;

def CalculaDivisao (n1,d1,n2,d2):
    numerador = n1 * d2;
    denominador = d1 * n2;
    return numerador, denominador;

print("Este programa irá fornecer o resultado das quatro operações entre dois numero racionais.");

numerador1 = float(input("Digite o numerador da primeira fração: "));
denomindor1 = float(input("Digite o denominador da primeira fração: "));
numerador2 = float(input("\nDigite o numerador da segunda fração: "));
denominador2 = float(input("Digite o numerador da segunda fração: "));

numerador,denominador = CalculaAdicao(numerador1,denomindor1,numerador2,denominador2);
print(f'\nO resultado da Adição das frações é:  {numerador} / {denominador}');
numerador,denominador = CalculaSubtracao(numerador1,denomindor1,numerador2,denominador2);
print(f'\nO resultado da Subtração das frações é:  {numerador} / {denominador}');
numerador,denominador = CalculaMultiplicacao(numerador1,denomindor1,numerador2,denominador2);
print(f'\nO resultado da Multiplição das frações é:  {numerador} / {denominador}');
numerador,denominador = CalculaDivisao(numerador1,denomindor1,numerador2,denominador2);
print(f'\nO resultado da Divisão das frações é: {numerador} / {denominador}');
