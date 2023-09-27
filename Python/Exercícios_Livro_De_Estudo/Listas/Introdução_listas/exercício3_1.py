#Pense em pelo menos cinco lugares do mundo que você gostaria de visitar.

#Armazene as localidades em uma lista. Certifique-se de que a lista não esteja em ordem alfabética.

viajem = ['Paris', 'Tailândia', 'Filipinas', 'Chapada Diamantina', 'Barreiras'];

#Exiba sua lista na ordem original. Não se preocupe em exibir a lista de forma elegante; basta exibi-la como uma lista Python pura.

print(viajem);

#Utilize sorted() para exibir sua lista em ordem alfabética, sem modificar a lista propriamente dita. Mostre que sua lista manteve sua ordem original exibindo-a.

print(sorted(viajem));
print(viajem);

#Utilize sorted() para exibir sua lista em ordem alfabética inversa sem alterar a ordem da lista original. Mostre que sua lista manteve sua ordem original exibindo-a novamente.

print(viajem.sort());
print(viajem);

#Utilize reverse() para mudar a ordem de sua lista. Exiba a lista para mostrar que sua ordem mudou.

viajem.reverse();
print(viajem);

#Utilize reverse() para mudar a ordem de sua lista novamente. Exiba a lista para mostrar que ela voltou à sua ordem original.

viajem.reverse();
print(viajem);

#Utilize sort() para mudar sua lista de modo que ela seja armazenada em ordem alfabética. Exiba a lista para mostrar que sua ordem mudou.

viajem.sort();
print(viajem);

#Utilize sort() para mudar sua lista de modo que ela seja armazenada em ordem alfabética inversa. Exiba a lista para mostrar que sua ordem mudou.

viajem.sort(reverse=True);
print(viajem);