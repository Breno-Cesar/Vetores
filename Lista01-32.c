#include <stdio.h>
#include <stdlib.h>

int anoBissexto(int ano) {
    if ((ano % 400 == 0) || (ano % 4 == 0 && ano % 100 != 0)) {
        return 1;
    }
    return 0;
}

int diasDoMes(int mes, int ano) {
    if (mes == 2) {
        return anoBissexto(ano) ? 29 : 28;
    }
    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
        return 31;
    }
    return 30;
}

int calcularDiferenca(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2) {
    int diasTotal = 0;

    for (int ano = ano1; ano < ano2; ano++) {
        diasTotal += anoBissexto(ano) ? 366 : 365;
    }

    for (int mes = mes1; mes <= 12; mes++) {
        diasTotal += diasDoMes(mes, ano1);
    }
    diasTotal -= dia1;

    for (int mes = 1; mes < mes2; mes++) {
        diasTotal += diasDoMes(mes, ano2);
    }
    diasTotal += dia2;

    return diasTotal;
}

int main() {
    int dia1, mes1, ano1;
    int dia2, mes2, ano2;

    printf("Digite a primeira data (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);

    printf("Digite a segunda data (dd/mm/yyyy): ");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    if (ano1 > ano2 || (ano1 == ano2 && mes1 > mes2) || (ano1 == ano2 && mes1 == mes2 && dia1 > dia2)) {
        printf("A primeira data deve ser a mais antiga.\n");
        return 1;
    }

    int diferencaDias = calcularDiferenca(dia1, mes1, ano1, dia2, mes2, ano2);

    printf("A diferenca entre as datas e de %d dias.\n", diferencaDias);

    return 0;
}
