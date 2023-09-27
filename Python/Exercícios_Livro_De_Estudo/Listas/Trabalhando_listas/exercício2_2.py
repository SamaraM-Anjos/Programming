#Crie uma lista de números de um a um milhão e, então, use um laço for para exibir os números. (Se a saída estiver demorando demais, interrompa pressionando CTRL-C ou feche a janela de saída.)

lista_1_a_1M = [];

for valor in range(1,1000001):
    lista_1_a_1M.append(valor);

print(lista_1_a_1M);