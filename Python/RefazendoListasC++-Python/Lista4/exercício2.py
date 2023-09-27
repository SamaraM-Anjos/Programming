import os
os.system('cls')

def VerificaDivisor (num1, num2):
    if num1 % num2 == 0:
        return True;
    else:
        return False;
def VerificaPar(num1,num2):
    if num1 % 2 == 0 or num2 % 2 == 0:
        return True;
    else:
        return False;


print("Este programa irá diser se um número é divisível pelo outro número oferecido.");

x = int(input("Digite um número inteiro: "));
y = int(input('Digite outro número inteiro: '));

if VerificaDivisor(x,y):
    print(f'O número  {x} é divisível por {y}.');
else:
    print(f"O número {x} não é divisível por {y}.");
if VerificaPar(x,y):
    print('Um dos números fornecidos é par.');
else:
    print('Os números fornecidos não são pares.');

