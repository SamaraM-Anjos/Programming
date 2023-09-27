import os
os.system('cls')

def CalculaFibonacci (num):
    i = 2;
    Fibonacci = 0;
    while i < num:
        Fibonacci = Fibonacci + i;
        print(Fibonacci);
        i += 1;
    return Fibonacci;

print("Este programa irá coletar um número e dizer quem ele representa na Sequência de Fibonacci.");

num = int(input("Digite um número: "));

print(f"O número que foi digitado, na Sequência de Fibonacci é: {CalculaFibonacci(num)}");

#Terminar depois