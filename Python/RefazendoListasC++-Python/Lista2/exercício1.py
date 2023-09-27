import os
os.system('cls');
def delta (a, b, c):
    resultado = b**2 - (4 * a * c);
    return resultado;

a = int(input("Digite o A da equação: " ));
b = int(input("Digite o B da equação: " ));
c = int(input("Digite o C da equação: " ));

print ("O delta da equação é: " + str(delta(a,b,c)));