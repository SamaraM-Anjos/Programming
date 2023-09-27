import math
import os
os.system('cls')

def Distancia_pontos(x1, y1, x2, y2):
    distancia  = math.sqrt((math.pow((x1 - x2),2) + math.pow((y1 - y2),2)));
    return distancia;

print("Este programa irá mostras a distância entre dois pontos em um plano.");

ponto_x1 = float(input("Digite a coordenada X do primeiro ponto: "));
ponto_y1 = float(input("Digite a coordenada Y do primeiro ponto: "));
ponto_x2 = float(input("Digite a coordenada X do segundo ponto: "));
ponto_y2 = float(input("Digite a coordenada Y do segundo ponto: "));

print("A distância entre esses dois pontos é: " + str(Distancia_pontos(ponto_x1, ponto_y1, ponto_x2, ponto_y2)));