import os
os.system('cls') 

def Multiplica_Indice(vetor1, vetor2, tamanho):
    i = 0;
    while i < tamanho:
        vetor2.append(vetor1[i] * i);
        i += 1;
    return vetor2;    

tamanho = int(input("Digite o tamanho do vetor: "));
vetor1 = [];
vetor2 = [];
i = 0;
while i < tamanho:
    num = int(input(f"Digite um número para a posição {i} do vetor: "));
    vetor1.append(num);
    i += 1;

os.system('cls') 
vetor2 = Multiplica_Indice(vetor1, vetor2, tamanho);
print(f"Os números do vetor multiplicados pelo seu índice é: {vetor2}");

