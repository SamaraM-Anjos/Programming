import os
os.system("cls")

#Criando as variáveis e vetores (Arrays)

vetor1 = [];
vetor2 = [];
i = 0;

#Pedindo o tamanho do Array

tamanho_vetor = int(input("Digite o tamanho do vetor: "));

#Coletando os dados para o Array

while i < tamanho_vetor:
    num = int(input(f"Digite o número na posição {i}: "));
    vetor1.insert(i, num);
    i += 1;
    os.system("cls")

#Copiando os elementos do primeiro vetor no segundo

i = 0;
while i < tamanho_vetor:
    vetor2.insert(i, vetor1[i]);
    i += 1;

#Exibindo

print(f"O primeiro vetor foi copiado, e é igual à: \n {vetor2}")