import os
import os
os.system('cls')

def SomaElementos(matriz):
    soma = 0;
    for i in range(2):
        for j in range(3):
            soma = soma + matriz[i][j];
            j += 1;
        i += 1;
    return soma;

matriz = [];

for i in range(2):
    linha = []
    for j in range(3):
        num = int(input(f"Digite um número na linha {i} e na coluna {j} da matriz: "));
        linha.append(num);
        j += 1;
    matriz.append(linha);
    i += 1;

soma = SomaElementos(matriz);

print(f"A soma de todos os números presentes dentro da matriz é: {soma}")