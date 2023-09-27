import os
import math
os.system('cls')

def CalculaPotencia(base, expoente):
    potencia = 1;
    i = 1;
    if expoente == 0:
        return potencia;
    
    elif expoente == 1:
        return base;
    
    #Calculando potência de base positiva e expoente positivo
    
    elif base > 0 and expoente > 0:
        while i <= expoente:
            potencia = base * potencia;
            i +=1;
        return potencia;

    #Calculando potência de base negativa e expoente par

    elif base < 0 and expoente > 0:
        if expoente % 2 == 0:
            base = base * (-1)
            while i <= expoente:
                potencia = base * potencia;
                i +=1;
        return potencia;
    
    #Calculando potência de base negativa e expoente impar
    
    elif base < 0 and expoente > 0:
        if expoente % 2 != 0:
            while i <= expoente:
                potencia = base * potencia;
                i +=1;
        return potencia;
    
    #Calculando potência de base positiva e expoente negativo
    
    elif base > 0 and expoente < 0:
        base = 1 / base;
        expoente = expoente * (-1);
        while i <= expoente:
            potencia = base * potencia;
            i +=1;
        return potencia;
    
    #Calculando potência de base negativa e expoente negativo par
    
    elif base < 0 and expoente < 0:
        expoente = expoente * (-1);
        base = 1 / base;
        if expoente % 2 == 0:
            base = base * (-1)
            while i <= expoente:
                potencia = base * potencia;
                i +=1;
        return potencia;
    
    #Calculando potência de base negativa e expoente ímpar
    
    elif base < 0 and expoente < 0:
        base = 1 / base;
        if expoente % 2 != 0:
            while i <= expoente:
                potencia = base * potencia;
                i +=1;
        return potencia * (-1);

#Refazer

print("Este programa irá dizer a pontência de um número digitado pelo expoente, também digitado.");

base = int(input("Digite a base para a potência: "));
expoente = int(input("Digite o expoente para a potência: "));

print(f"O resultado da potência é: {CalculaPotencia(base, expoente)}");