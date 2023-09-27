import os
os.system('cls')

def VerificaPrimo (num):
    quantidade_divisores = 0;
    i = 1;
    while i <= num:
        if num % i == 0:
            quantidade_divisores += 1;
        i += 1;
    if quantidade_divisores != 2:
        return False;
    else:
        return True;

print("Este progroma irá dizer se um número inteiro positivo digitado é primo ou não.");

num = int(input("Digite um número: "));

print(f"O número digitado é primo? {VerificaPrimo(num)}");