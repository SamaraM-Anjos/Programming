#Pensa em algo que você poderia armazenar em uma lista. Por exemplo, você poderia criar uma lista de montanhas, rios, países, cidades, idiomas ou qualquer outro item que quiser. Escreva um programa que crie uma lista contendo esses itens e então utilize cada função apresentada neste capítulo pelo menos uma vez.

# .title() .upper() .lower() .append() .insert() del .pop() .remove len .sorted() .reverse() .sort() 

fav_musicas = ["If you wanna love", "Paralyzed", "Carimbador Maluco", "Acabei de terminar", "Leão"];

print(fav_musicas[0].title());
print(fav_musicas[1].title());
print(fav_musicas[2].title());
print(fav_musicas[3].title());
print(fav_musicas[4].title());

print(fav_musicas[0].lower());
print(fav_musicas[1].lower());
print(fav_musicas[2].lower());
print(fav_musicas[3].lower());
print(fav_musicas[4].lower());


print(fav_musicas[0].upper());
print(fav_musicas[1].upper());
print(fav_musicas[2].upper());
print(fav_musicas[3].upper());
print(fav_musicas[4].upper());


fav_musicas.append("Mansion");
print(fav_musicas);

fav_musicas.insert(3, "De tanto te querer");
fav_musicas.insert(5, "Jericho");
fav_musicas.insert(2, "Shut Up and Dance With Me")
print(fav_musicas);

del fav_musicas[3];
print(fav_musicas);

fav_musicas.pop(4);
fav_musicas.remove("Shut Up and Dance With Me");
print(fav_musicas);

print(fav_musicas.sort(reverse=True));

print(sorted(fav_musicas));

fav_musicas.reverse();
print(fav_musicas);

fav_musicas.reverse()
print(fav_musicas);6

print(len(fav_musicas));

