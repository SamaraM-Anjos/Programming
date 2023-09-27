import random

num1 = 10;
num2 = 5.2;
num3 = 1j;

num4 = random.randrange(0,59);

x = int(num2); #Operações de casting - Transformando um tipo de dado em outro

print("Valor: " + str(num1) + " Tipo : " + str(type(num1)));#Transformando números em string, para realizar a concatenação
print("Valor: " + str(num2) + " Tipo : " + str(type(num2)));
print("Valor: " + str(num3) + " Tipo : " + str(type(num3)));
print("Valor: " + str(x) + " Tipo : " + str(type(x)));
print("Valor: " + str(num4) + " Tipo : " + str(type(num4)));