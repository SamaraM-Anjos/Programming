import os
import random
os.system('cls')

#Criando as variáveis e vetores (Arrays)

Tamanho_jogo = 13;
Gabarito = [];
Aposta = [];
Quantidade_acertos = 0;
i = 0;

#Fazendo o gabarito do jogo

while i < Tamanho_jogo:
    num = random.randrange(1,4);
    Gabarito.insert(i,num);
    i += 1;

#Pegando as apostas do jogador

print("Faça suas apostas e veja se você ganhará. Digite 1 p/ Coluna 1, 2 p/ Coluna 2 ou 3 p/ Coluna do meio.");
i = 0;
while i < Tamanho_jogo:
    num = int(input(f"Digite sua {i + 1}º aposta: "));
    Aposta.insert(i, num);
    i += 1;

#Verificando as apostas

i = 0;
while i < Tamanho_jogo:
    if Aposta[i] == Gabarito[i]:
        Quantidade_acertos += 1;
    i += 1;

#Exibinso os resultados

if Quantidade_acertos == 13:
    print(f"Sua quantidade de acertos foi igual à: {Quantidade_acertos}/13.");
    print("Parábens, você acertou todas as apostas!!")
else:
    print(f"Sua quantidade de acertos foi igual à: {Quantidade_acertos}/13.");
    print("Infelizmente você não ganhou o jogo. Tente novamente.");