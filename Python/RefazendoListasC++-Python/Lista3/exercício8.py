import os
os.system('cls')

def CalculaPontoMedio (x1,y1,x2,y2):
    ponto_X = (x1 + x2) / 2;
    ponto_Y = (y1 + y2) / 2;
    return ponto_X, ponto_Y;

print("Este programa irá mostrar o valor do ponto médio de X e Y de dois pontos de um plano.");

x1 = float(input("Digite o X da coordenada X1: "));
y1 = float(input("Digite o Y da coordenada X1: "));
x2 = float(input("Digite o X da coordenada X2: "));
y2 = float(input("Digite o Y da coordenada X2: "));

ponto_medioX, ponto_medioY = CalculaPontoMedio(x1,y1,x2,y2);

print(f"O ponto médio da reta é: ({ponto_medioX},{ponto_medioY})"); #Aqui foi utilizada uma tupla para pegar os valores do ponto médio.