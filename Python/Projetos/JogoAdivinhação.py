import random
import os

print("Tente adivinhar o número de 1 a 20");

numero_fornecido = int(input("Digite um número: "));

tentativas = 0;

numero_correto = random.randrange(1,20);

while numero_fornecido != numero_correto:
    tentativas += 1;
    print("Número errado, tente novamente.");
    numero_fornecido = int(input("Digite um número: "));
if numero_fornecido == numero_correto:
    print(f"Parabéns, o número {numero_fornecido} foi o número sorteado. Tentativas = {tentativas}");