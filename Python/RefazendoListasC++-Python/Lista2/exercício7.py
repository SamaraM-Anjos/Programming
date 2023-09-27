import os
os.system('cls')

def verifica_vogal (x):
    if x == 'a' or x == 'e' or x == 'i'  or x == 'o' or x == 'u' or x == 'A' or x == 'E' or x == 'I' or x == 'O' or x == 'U':
        return True;
    else:
        return False;

def verifica_algarismo (x):
    if x >= '0' and x <= '9':
        return True;
    else:
        return False;

def verifica_letra_min (x):
    if x >= 'a' and x <= 'z':
        return True;
    else:
        return False;

def verifica_letra_mai (x):
    if x >= 'A' and x <= "Z":
        return True;
    else:
        return False;

def verifica_letra (x):
    if verifica_letra_min(x) or verifica_letra_mai(x):
        return True;
    else: 
        return False;

def verifica_consoante (x):
    if verifica_letra (x) and verifica_vogal (x) == False:
        return True;
    else: 
        return False;

def verifica_par (x):
    if verifica_algarismo(x):
        x = float(x);
        if x % 2 == 0:
            return True;
        else:
            return False;

print("Este programa irá dizer se um caractere digitado é Vogal ou Algarismo ou Letra maiúscula ou Letra minúscula ou Letra ou Consoante.");

caractere = input("Digite um caractere: ");


print("É VOGAL? " + str(bool((verifica_vogal(caractere)))));
print("É ALGARISMO? " + str(bool((verifica_algarismo(caractere)))));
print("É LETRA MINÚSCULA? " + str(bool((verifica_letra_min(caractere)))));
print("É LETRA MAIÚSCULA? " + str(bool((verifica_letra_mai(caractere)))));
print("É LETRA? " + str(bool((verifica_letra(caractere)))));
print("É CONSOANTE? " + str(bool((verifica_consoante(caractere)))));
print("É UM ALGARISMO PAR? " + str(bool((verifica_par(caractere)))));
