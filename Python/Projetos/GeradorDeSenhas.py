import random

letras = "abcdefghijklmnopqrstuvwyz";
caracteres_especiais = "=!@#$%&";
numeros = "0123456789"

all_chars = letras + caracteres_especiais + numeros;

senha = "";

for x in range(10):
    caractere = random.choice(all_chars);
    senha += caractere;

print(f"Your new password is:  {senha}");