#Use o terceiro argumento da função range() para criar uma lista de números ímpares de 1 a 20. Utilize um laço for para exibir todos os números.

num_impares = [];
for valor in range(1,21,2):
    num_impares.append(valor);

print(num_impares);