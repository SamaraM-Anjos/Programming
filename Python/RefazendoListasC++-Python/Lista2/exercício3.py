import os
os.system('cls');

def volume_esfera (r):
    pi = 3.141592; #constante
    
    volume = ((4 / 3) * pi) * r**3;
    return volume;

print ("Este programa irá dizer o Volume de uma esfera");

raio = float(input("Digite o Raio da esfera: "));

print("O volume da esfera é: " + str(volume_esfera(raio)));
