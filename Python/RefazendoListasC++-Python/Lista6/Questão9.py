import os
os.system('cls')

def SomaMatrizes (matriz1, matriz2, matriz3, qtdd_linhas, qtdd_colunas):
    for i in range(qtdd_linhas):
        linha = [];
        for j in range (qtdd_colunas):
            linha.append(matriz1[i][j] + matriz2[i][j]);
            j += 1;
        matriz3.append(linha);
        i += 1;
    return matriz3;

linhas = int(input('Digite a quantidade de linhas da matriz: '));
colunas = int(input('Ditite a quantidade de colunas da matriz: '));

matriz1 = [];
matriz2 = [];
matriz3 = [];

for i in range(linhas):
    linha = []
    for j in range(colunas):
        num = int(input(f'Digite o número da linha {i} e coluna {j} da matriz 1: '));
        linha.append(num);
        j +=1;
    matriz1.append(linha);
    i += 1;

os.system('cls');

for i in range(linhas):
    linha = []
    for j in range(colunas):
        num = int(input(f'Digite o número da linha {i} e coluna {j} da matriz 2: '));
        linha.append(num);
        j +=1;
    matriz2.append(linha);
    i += 1;

os.system('cls');

matriz3 = SomaMatrizes(matriz1, matriz2, matriz3, linhas, colunas);

print(f"A primeira matriz ficou: {matriz1}");
print(f"A segunda matriz ficou: {matriz2}");
print(f"A soma das duas matrizes é: {matriz3}");