import os
os.system('cls')

def VerificaTriangulo (lado1, lado2, lado3):
    if lado1 < (lado2 + lado3) and lado2 < (lado1 + lado2) and lado3 < (lado2 + lado1):
        return True;
    else:
        return False;

def VerificaTipoDoTriangulo (lado1, lado2, lado3):
    if VerificaTriangulo(lado1, lado2, lado3) == False:
        return 0;
    else:
        if lado1 == lado2 and lado1 == lado3:
            return 3;
        elif (lado1 == lado2 and lado1 != lado3) or (lado2 == lado3 and lado2 != lado1) or (lado3 == lado1 and lado3 != lado2):
            return 2;
        else:
            return 1;

print (f'Este programa irá dizer se os três lados fornecidos formam um triângulo e qual seria o triangulo');

lado1 = int(input('Digite o lado A do triângulo: '));
lado2 = int(input('Digite o lado B do triângulo: ')); 
lado3 = int(input('Digite o lado C do triângulo: '));

resultado = VerificaTipoDoTriangulo (lado1, lado2, lado3);

def switch (resultado):
    if resultado == 0:
        mensagem = 'Os dados oferecidos não formam um triângulo.';
        return mensagem;
    elif resultado == 1:
        mensagem = 'Os dados fornecidos formam um trinângulo escaleno.';
        return mensagem;
    elif resultado == 2:
        mensagem = 'Os dados fornecidos formam um triângulo isósceles.';
        return mensagem;
    elif resultado == 3:
        mensagem = 'Os dados fornecidos formam um triângulo equilátero.';
        return mensagem;

print(switch(resultado));