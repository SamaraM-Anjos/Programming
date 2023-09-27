import os
os.system('cls')

def FatorialNumero(num):
    fatorial = num;
    i = 1;
    if num == 0 or num == 1:
        return num;
    else:
        while i < num:
            fatorial = fatorial * (num - i);
            i += 1;
    return fatorial;

print("Este programa irá exibir o fatorial de um número.");

num = int(input("Digite um número inteiro positivo: "));

print(f"O fatorial do numero é: {FatorialNumero(num)}.");
