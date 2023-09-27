#Você acabou de saber que um de seus convidados não poderá comparecer ao jantar, portanto será necessário enviar um novo conjunto de convites. Você deverá pensar em outra pessoa para convidar.

#Comece com seu programa do Exercício 3.4. Acrescente uma instrução print no final de seu programa, especificando o nome do convidado que não poderá comparecer.

lista_convidados = ['Rose','José','Zale', 'Samara'];
mensagem = "você está sendo convidado(a) para meu jantar, espero que compareça. =D";

print(lista_convidados[0].upper() + ", " + mensagem);
print(lista_convidados[1].upper() + ", " + mensagem);
print(lista_convidados[2].upper() + ", " + mensagem);
print(lista_convidados[3].upper() + ", " + mensagem);

#Modifique sua lista, substituindo o nome do convidado que não poderá comparecer pelo nome da nova pessoa que você está convidando. Exiba um segundo conjunto de mensagens com o convite, uma para cada pessoa que continua presente em sua lista.

print("O(A) convidado(a), Samara não poderá comparecer.");

lista_convidados[3] = "Nena";

print(lista_convidados[0].upper() + ", " + mensagem);
print(lista_convidados[1].upper() + ", " + mensagem);
print(lista_convidados[2].upper() + ", " + mensagem);
print(lista_convidados[3].upper() + ", " + mensagem);