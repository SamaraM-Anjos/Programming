#Trabalhando com um dos programas dos Exercícios de 3.4 a 3.7 (páginas 80 e 81), use len() para exibir uma mensagem informando o número de pessoas que você está convidando para o jantar.

lista_convidados = ['Rose','José','Zale', 'Nena'];
mensagem = "você está sendo convidado(a) para meu jantar, espero que compareça. =D";

print(len(lista_convidados));

lista_convidados.insert(0, "Vó");
lista_convidados.insert(2, "Padrinho");
lista_convidados.append("Madrinha");

print(len(lista_convidados));