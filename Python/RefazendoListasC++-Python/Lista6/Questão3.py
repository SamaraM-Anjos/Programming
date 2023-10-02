import os
os.system('cls')

#Criando as variáveis e vetores (Arrays)

vetor1 = [];
vetor2 = [];
vetor3 = [];

#Pedindo o tamanho do Array

tamanho_vetor = int(input("Digite o tamanho do vetor: "))

#Coletando os dados para o primeiro vetor

i = 0
while i < tamanho_vetor:
    num = int(input(f"Digite o número na posição '{i}' do primeiro vetor: "));
    vetor1.insert(i, num);
    i += 1;
os.system('cls')

#Pedindo os valores para o segundo vetor

i = 0
while i < tamanho_vetor:
    num = int(input(f"Digite o número na posição '{i}' do segundo vetor: "));
    vetor2.insert(i, num);
    i += 1;
os.system('cls')

#Copiado os dados dos vetores 1 e 2 em um terceiro vetor

i = 0
while(i < (tamanho_vetor)):
    vetor3.insert(i, vetor1[i])
    i += 1;
i = tamanho_vetor;
j = 0;
while(i < (tamanho_vetor * 2)):
    vetor3.insert(i, vetor2[j])
    i += 1
    j += 1

#Exibindo

print(f"O primeiro vetor é: {vetor1}")
print(f"O segundo vetor é: {vetor2}")
print(f"A junção dos vetores 1 e 2 é: {vetor3}")