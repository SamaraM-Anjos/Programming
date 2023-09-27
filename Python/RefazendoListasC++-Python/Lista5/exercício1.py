import os
os.system('cls')

def Ceil (num):
    i = 0;
    if num > 0:
        while i < num:
            i += 1
            if i >= num:
                return i
    if num < 0 :
        while i > num:
            i -= 1
            if i <= num:
                return i

def Floor (num):
    i = 0
    if num > 0:
        while i < num:
            i += 1;
            if i > num:
                return i - 1
            elif i == num:
                return num;
    if num < 0:
        while i > num:
            i -= 1;
            if i <= num:
                return i;

print(str("Este programa irá mostrar o arredondamento para cima e para baixo de um número real digitado"))

num = float(input("Digite um número: "))

print (f"O arredondamento do número para baixo é: {Floor(num)}");
print (f"O arredodamento do número para cima é: {Ceil(num)}");