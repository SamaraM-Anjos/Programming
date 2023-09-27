import os
os.system('cls')

def Calculadora (num1, num2, operador):
    if operador == '+':
        conta = num1 + num2;
        return conta;
    elif operador == '-':
        conta = num1 - num2;
        return conta;
    elif operador == '*':
        conta = num1 * num2;
        return conta;
    elif operador == '/':
        conta = num1 / num2;
        return conta;

print("Este programa irá fazer operações de soma (+), subtração (-), multiplicação (*) ou divisão (/).");

num1 = int(input("Digite um número: "))
num2 = int(input("Digite um outro número: "));
operador = input("Digite um operador, como informado anteriormente: ");

print(f"O resultado da operação escolhida foi: {Calculadora(num1, num2, operador)}");
