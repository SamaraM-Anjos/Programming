import os
os.system('cls')

#Função para verificar se um número é par

def Verifica_Par(num):
    if num % 2 == 0:
        return True;
    else:
        return False;

#Criando as variáveis e vetores (Arrays)

vetor1 = [];
vetor2 = [];
vetor3 = [];

#Pedindo o tamanho do Array

tamanho_vetor = int(input("Digite o tamanho do vetor: "));

#Pedindo os valores para o primeiro vetor

i = 0;
while i < tamanho_vetor:
    num = int(input(f"Digite o número na posição '{i}' do primeiro vetor: "));
    vetor1.insert(i, num);
    i += 1;
os.system('cls')

#Pedindo os valores para o segundo vetor

i = 0;
while i < tamanho_vetor:
    num = int(input(f"Digite o número na posição '{i}' do segundo vetor: "));
    vetor2.insert(i, num);
    i += 1;
os.system('cls')

#Intercalando os dois vetores

i = 0;
j = 0;
g = 0;

while i < (tamanho_vetor * 2):
    if i == 0 or Verifica_Par(i) == True:
        vetor3.insert(i, vetor1[j]);
        j += 1;
        
    else:
        vetor3.insert(i, vetor2[g]);
        g += 1;
    i += 1;

os.system('cls')

#Exibindo

print(f"O primeiro vetor é: {vetor1}");
print(f"O segundo vetor é: {vetor2}");
print(f"Os vetores intercalados são: {vetor3}");
