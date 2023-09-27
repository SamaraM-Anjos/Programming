import os
os.system('cls')

def converte_angulo (graus):
    pi = 3.141592; #constante
    radiano = (pi * graus) / 180;
    return radiano;

graus_angulo = float(input("Digite o angulos em graus: "));

print("O angulos em radianos é: " + str(converte_angulo(graus_angulo)));