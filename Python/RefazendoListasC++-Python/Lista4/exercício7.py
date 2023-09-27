import os
os.system('cls')

def MesDoAno (numero_mes):
    mes = "";
    if numero_mes > 12 or numero_mes < 1:
        return 0;
    elif numero_mes == 1:
        mes = 'Janeiro';
        return mes;
    elif numero_mes == 2:
        mes = 'Fevereiro';
        return mes;
    elif numero_mes == 3:
        mes = 'Março';
        return mes;
    elif numero_mes == 4 :
        mes = 'Abril';
        return mes;
    elif numero_mes == 5:
        mes = 'Maio';
        return mes;
    elif numero_mes == 6:
        mes = 'Junho';
        return mes;
    elif numero_mes == 7:
        mes = 'Julho';
        return mes;
    elif numero_mes == 8:
        mes = 'Agosto';
        return mes;
    elif numero_mes == 9:
        mes = 'Setembro';
        return mes;
    elif numero_mes == 10:
        mes = 'Outubro';
        return mes;
    elif numero_mes == 11:
        mes = 'Novembro';
        return mes;
    elif numero_mes == 12:
        mes = 'Dezembro';
        return mes;

print("Este programa irá apresentar o nome do mês que o número digitado, entre 1 e 12, representa: ");
mes = int(input("Digite o número do mês (não utilize zero): "));

print(f"O mês referente ao número {mes} é: {MesDoAno(mes)}");