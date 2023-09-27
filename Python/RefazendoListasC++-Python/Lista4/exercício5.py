import os
os.system('cls')

def Calcula_IMC(peso, altura):
    IMC = (peso / altura**2);
    if IMC < 25:
        return 0;
    elif IMC >= 25 and IMC < 30:
        return 1;
    elif IMC >= 30 and IMC < 35:
        return 2;
    elif IMC >= 35 < 40:
        return 3;
    elif IMC >= 45:
        return 4;


print("Este programa calcula o IMC e diz qual o seu nível de obesidade.");
altura = float(input("Digite sua altura: "));
peso = float(input("Digite seu peso: "));

resultado = Calcula_IMC (peso, altura);

def switch(resultado):
    if resultado == 0:
        mensagem = "Ausência de obesidade.";
        return mensagem;
    elif resultado == 1:
        mensagem = "Sobrepeso.";
        return mensagem;
    elif resultado == 2:
        mensagem = "Obesidade grau 1";
        return mensagem;
    elif resultado == 3:
        mensagem = "Obesidade grau 2";
        return mensagem;
    elif resultado == 4:
        mensagem = "Obesidade mórbida";
        return mensagem;

print(switch(resultado));