#Você acabou de descobrir que sua nova mesa de jantar não chegará a tempo para o jantar e tem espaço para somente dois convidados.

#Comece com seu programa do Exercício 3.6. Acrescente uma nova linha que mostre uma mensagem informando que você pode convidar apenas duas pessoas para o jantar

lista_convidados = ['Rose','José','Zale', 'Nena'];
mensagem = "você está sendo convidado(a) para meu jantar, espero que compareça. =D";

print("Caro(a)," + lista_convidados[0] +  ", foi possível encontrar uma mesa de jantar maior, convidarei mais pessoas.");
print("Caro(a)," + lista_convidados[1] +  ", foi possível encontrar uma mesa de jantar maior, convidarei mais pessoas.");
print("Caro(a)," + lista_convidados[2] +  ", foi possível encontrar uma mesa de jantar maior, convidarei mais pessoas.");
print("Caro(a)," + lista_convidados[3] +  ", foi possível encontrar uma mesa de jantar maior, convidarei mais pessoas.");

lista_convidados.insert(0, "Vó");
lista_convidados.insert(2, "Padrinho");
lista_convidados.append("Madrinha");

print(lista_convidados[0] + ", " + mensagem);
print(lista_convidados[1] + ", " + mensagem);
print(lista_convidados[2] + ", " + mensagem);
print(lista_convidados[3] + ", " + mensagem);
print(lista_convidados[4] + ", " + mensagem);
print(lista_convidados[5] + ", " + mensagem);
print(lista_convidados[6] + ", " + mensagem);

print("Caro(a)," + lista_convidados[0] +  ", a mesa maior foi cancelada, só poderei convidar 2 pessoas.");
print("Caro(a)," + lista_convidados[1] +  ", a mesa maior foi cancelada, só poderei convidar 2 pessoas.");
print("Caro(a)," + lista_convidados[2] +  ", a mesa maior foi cancelada, só poderei convidar 2 pessoas.");
print("Caro(a)," + lista_convidados[3] +  ", a mesa maior foi cancelada, só poderei convidar 2 pessoas.");
print("Caro(a)," + lista_convidados[4] +  ", a mesa maior foi cancelada, só poderei convidar 2 pessoas.");
print("Caro(a)," + lista_convidados[5] +  ", a mesa maior foi cancelada, só poderei convidar 2 pessoas.");
print("Caro(a)," + lista_convidados[6] +  ", a mesa maior foi cancelada, só poderei convidar 2 pessoas.");

#Utilize pop() para remover os convidados de sua lista, um de cada vez, até que apenas dois nomes permaneçam em sua lista. Sempre que remover um nome de sua lista, mostre uma mensagem a essa pessoa, permitindo que ela saiba que você sente muito por não poder convidá-la para o jantar.

print("Caro(a)," + lista_convidados[-1] +  ", infelizmente levarei outra pessoa para o jantar.");
lista_convidados.pop(-1);

print("Caro(a)," + lista_convidados[-1] +  ", infelizmente levarei outra pessoa para o jantar.");
lista_convidados.pop(-1);

print("Caro(a)," + lista_convidados[-1] +  ", infelizmente levarei outra pessoa para o jantar.");
lista_convidados.pop(-1);

print("Caro(a)," + lista_convidados[-1] +  ", infelizmente levarei outra pessoa para o jantar.");
lista_convidados.pop();

print("Caro(a)," + lista_convidados[-1] +  ", infelizmente levarei outra pessoa para o jantar.");
lista_convidados.pop();

#Apresente uma mensagem para cada uma das duas pessoas que continuam na lista, permitindo que elas saibam que ainda estão convidadas.

print("Caro(a)," + lista_convidados[0] +  ", você ainda está convidado(a) para o jantar.");
print("Caro(a)," + lista_convidados[1] +  ", você ainda está convidado(a) para o jantar.");

#Utilize del para remover os dois últimos nomes de sua lista, de modo que você tenha uma lista vazia. Mostre sua lista para garantir que você realmente tem uma lista vazia no final de seu programa.

del lista_convidados[0];
del lista_convidados[0];

print(lista_convidados);