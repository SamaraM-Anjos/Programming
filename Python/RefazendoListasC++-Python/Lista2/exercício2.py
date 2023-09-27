import os
os.system('cls');
def converte_temperatura(Celcius):
    fahrenheit = 1.8 * Celcius + 32;
    return fahrenheit;

print("Este programa irá converter a temperatura em Graus Celcius em Fahrenheit");

graus_celcius = float(input("Digite a temperatura em Graus Celcius: "));

print("A temperatura convertida em Fahrenheit é: " + str(converte_temperatura(graus_celcius)));