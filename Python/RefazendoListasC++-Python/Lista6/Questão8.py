import os
os.system('cls')

def MaiorNumero (vetor,tamanho):
    i = 0;
    maior_num = 0;
    while i < tamanho:
        if maior_num < vetor[i]:
            maior_num = vetor[i];
        i += 1;
    return maior_num;

tamanho = int(input('Digite o tamanho do vetor: '));

vetor = [];
i = 0;

while i < tamanho:
    num = int(input(f'Digite um número para a posição {i} do vetor: '));
    vetor.append(num);
    i += 1;

maior_num = MaiorNumero(vetor, tamanho);
print(f"O maior número do vetor é: {maior_num}");