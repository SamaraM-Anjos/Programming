import os
os.system('cls')

def fabs (x):
    if x >= 0:
        return x;
    else:
        return x * (-1);

print("Este programa irá mostrar o valor absoluto (módulo) de um número digitado.\n");

num = float(input("Digite um número: "));

print(f'O valor absoluto (módulo) do número é: {fabs(num)}');