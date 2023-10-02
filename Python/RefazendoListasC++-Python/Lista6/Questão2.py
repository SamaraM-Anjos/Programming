import os
os.system('cls')

#Criando as variáveis e vetores (Arrays)

vetor1 = [];
vetor2 = [];
vetor3 = [];
i = 0;

#Pedindo o tamanho do Array

tamanho_vetor = int(input("Digite o tamanho do vetor: "));

#Coletando os dados para o primeiro vetor

while i < tamanho_vetor:
    num = int(input(f"Digite o número na posição {i}: "));
    vetor1.insert(i, num);
    i += 1;
os.system("cls")

#Coletando os dados para o segundo vetor

i = 0;

while i < tamanho_vetor:
    num = int(input(f"Digite o número na posição {i}: "));
    vetor2.insert(i, num);
    i += 1;
os.system("cls")

#Somando os itens dos vetor 1 e vetor 2 em um terceiro vetor

i = 0

while i < tamanho_vetor:
    vetor3.insert(i, vetor1[i] + vetor2[i])
    i += 1;

#Exibindo

os.system("cls")
print(f"O vetor 1 é: {vetor1}");
print(f"O vetor 2 é: {vetor2}");
print(f"A soma dos dois vetores é: {vetor3}");