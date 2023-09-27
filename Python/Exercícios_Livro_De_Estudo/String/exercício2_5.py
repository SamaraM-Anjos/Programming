#Armazene o nome de uma pessoa e inclua alguns caracteres em branco no início e no final dp nome. Lembre-se de usar cadacombinação de caracteres, "\t" e "\n", pelo menos uma vez. Exiba o nome uma vez, de modo que os espaços em branco em torno do nome sejam mostrados. Em seguida, exiba o nome usando cada uma das três funções de remoção de espaçes: lstrip(),rstrip() e strip().

nome_pessoa = "  Rose  ";
print("'"+ nome_pessoa + "'");
print(nome_pessoa.lstrip());
print(nome_pessoa.rstrip());
print(nome_pessoa.strip());