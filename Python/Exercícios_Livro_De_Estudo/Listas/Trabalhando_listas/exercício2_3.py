#Crie uma lista de números de um a um milhão e, em seguida, use min() e max() para garantir que sua lista realmente começa em um e termina em um milhão. Além disso, utilize a função sum() para ver a rapidez com que Python é capaz de somar um milhão de números.

lista_1_a_1M = [];

for valor in range(1,1000001):
    lista_1_a_1M.append(valor);

print(lista_1_a_1M);
print(min(lista_1_a_1M));
print(max(lista_1_a_1M));
print(sum(lista_1_a_1M));