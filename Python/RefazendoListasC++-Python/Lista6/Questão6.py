import os
os.system("cls")

vetor1 = [];
vetor2 = [];

tamanho_vetor = int(input("Digite o tamanho do vetor: "));
i = 0;
while i < tamanho_vetor:
    num = int(input(f"Digite um número para a posição {i} do vetor: "));
    vetor1.insert(i, num);
    i += 1;
os.system("cls")
i = 0;
j = tamanho_vetor - 1;
while i < tamanho_vetor:
    vetor2.insert(i, vetor1[j]);
    i += 1;
    j -= 1;

print(f"O vetor 1 é igual a: {vetor1}");
print(f"O vetor 1 invertido fica: {vetor2}");