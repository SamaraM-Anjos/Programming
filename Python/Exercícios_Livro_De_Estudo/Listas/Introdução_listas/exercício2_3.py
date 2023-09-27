#Você acabou de encontrar uma mesa de jantar maior, portanto agora tem mais espaço disponível. Pense em mais três convidados para o jantar.

lista_convidados = ['Rose','José','Zale', 'Nena'];
mensagem = "você está sendo convidado(a) para meu jantar, espero que compareça. =D";

print(lista_convidados[0].upper() + ", " + mensagem);
print(lista_convidados[1].upper() + ", " + mensagem);
print(lista_convidados[2].upper() + ", " + mensagem);
print(lista_convidados[3].upper() + ", " + mensagem);

#Comece com seu programa do Exercício 3.4 ou do Exercício 3.5. Acrescente uma instrução print no final de seu programa informando às pessoas que você encontrou uma mesa de jantar maior.

print("Caro(a)," + lista_convidados[0] +  ", foi possível encontrar uma mesa de jantar maior, convidarei mais pessoas.");
print("Caro(a)," + lista_convidados[1] +  ", foi possível encontrar uma mesa de jantar maior, convidarei mais pessoas.");
print("Caro(a)," + lista_convidados[2] +  ", foi possível encontrar uma mesa de jantar maior, convidarei mais pessoas.");
print("Caro(a)," + lista_convidados[3] +  ", foi possível encontrar uma mesa de jantar maior, convidarei mais pessoas.");

#Utilize insert() para adicionar um novo convidado no início de sua lista.

lista_convidados.insert(0, "Vó");

#Utilize insert() para adicionar um novo convidado no meio de sua lista.

lista_convidados.insert(2, "Padrinho");

#Utilize append() para adicionar um novo convidado no final de sua lista.

lista_convidados.append("Madrinha");

#Exiba um novo conjunto de mensagens de convite, uma para cada pessoa que está em sua lista.

print(lista_convidados[0] + ", " + mensagem);
print(lista_convidados[1] + ", " + mensagem);
print(lista_convidados[2] + ", " + mensagem);
print(lista_convidados[3] + ", " + mensagem);
print(lista_convidados[4] + ", " + mensagem);
print(lista_convidados[5] + ", " + mensagem);
print(lista_convidados[6] + ", " + mensagem);