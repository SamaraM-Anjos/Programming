import math
import os
os.system('cls')

def AreaTriangulo (a,b,graus):
    area = (a * b * math.sin(graus)) / 2;
    return area;

print("Este programa irá mostras a área de um triângulo fornecido.");

lado_a = float(input("Digite o lado A do triângulo: "));
lado_b = float(input("Digite o lado B do triângulo: "));
graus_triangulo = float(input("Digite os graus do ângulo do triangulo: "));
radiano = math.radians(graus_triangulo);

print("O valor da área do triângulo é: " + str(AreaTriangulo(lado_a, lado_b, radiano)));