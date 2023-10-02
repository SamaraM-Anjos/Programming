import os
os.system('cls')

carros = [];

class Carro:
    ligado = False;
    def __init__(self, nome, potencia):       # Criando as características presentes no carro
        self.nome = nome;
        self.potencia = potencia;
        self.velocidade_max = int(potencia) * 2;
        self.ligado = False;
    
    
    def Ligar(ligado):      # Método para ligar o carro
        ligado = True;
    
    def Desligar (ligado):      # Método para desligar o carro
        ligado = False;
        
    def info(self):     # Método para fornecer na tela todas as informações do carro
        print(f"Nome: {self.nome}. \nPotência: {self.potencia}.\nVelociade Máxima: {self.velocidade_max}.\nLigado: {'Sim' if self.ligado == True else 'Não'}.");

def Menu():     # Função para definir se haverá a criação, exclusão, exibição, ligação ou desligamento do carro
    os.system('cls')

    escolha = int(input("\nEscolha uma das opçoes abaixo, basta digitar uma dessa opções, digite:\n1 - (Criação de um novo carro)\n2 - (Exibir informações do carro)\n3 - (Excluir um carro)\n4 - (Ligar o Carro)\n5 - (Desligar o Carro)\n6 - (Listar os carros)\n7 - (Sair)\n"));
    print(f"Quantidade de caros: {len(carros)}");
    return escolha;

def Cria_carros():      # Função para criação de um novo carro e adicioná-lo na lista
    os.system('cls')
    nome_do_carro = input("Digite o nome do carro: ");
    potencia = int(input("Digite a potência total do carro: "));
    carro = Carro(nome_do_carro,potencia);
    carros.append(carro);
    print("Carro criado com sucesso!");
    os.system('pause')



def Informações():
    os.system('cls')
    n = int(input("Digite o número do carro que você deseja que apareça as informações completas: "));
    try:
        carros[n].info();
    except:
        print("Carro não existe na lista");
    os.system('pause')

def Exclui_carros():
    os.system('cls')
    n = int(input("Digite o número do carro que você deseja excluir: "));
    try:
        del carros[n];
    except:
        print("Carro não existe na lista");
    os.system('pause')


def Liga_carro():
    os.system('cls')
    n = int(input("Digite o número do carro que você deseja ligar: "));
    try:
        carros[n].Ligar(); # Chamando um dos métodos presente na Classe Carro
        print("Carro foi ligado");
    except:
        print("Carro não existe na lista");
    os.system('pause')


def Desliga_carro():
    os.system('cls')
    n = int(input("Digite o número do carro que você deseja desligar: "));
    try:
        carros[n].Desligar(); # Chamando um dos métodos presente na Classe Carro
        print("Carro foi deligado");
    except:
        print("Carro não existe na lista");
    os.system('pause')

def Lista_carros():
    os.system('cls')
    posicao_carro = 0;
    for carro in carros:
        print(f"A posição {posicao_carro} representa o carro: {carro.nome}");
        posicao_carro += 1;
    os.system('pause')

#Criando um loop While para poder pegar cada uma das opções e chamar sua determinada função

retorno = Menu();

while retorno >= 1 and retorno <= 7:
    if retorno == 1:
        Cria_carros();
    elif retorno == 2:
        Informações();
    elif retorno == 3:
        Exclui_carros();
    elif retorno == 4:
        Liga_carro();
    elif retorno == 5:
        Desliga_carro();
    elif retorno == 6:
        Lista_carros();
    elif retorno == 7:
        print("Aplicação finalizada com sucesso.");
        break;
    retorno = Menu();