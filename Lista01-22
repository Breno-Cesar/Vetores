#include <stdio.h>
#include <stdlib.h>

int calcularDuracao(int horaInicio, int minutoInicio, int horaFim, int minutoFim) {
    int inicioEmMinutos, fimEmMinutos, duracao;

    inicioEmMinutos = horaInicio * 60 + minutoInicio;
    fimEmMinutos = horaFim * 60 + minutoFim;

    if (fimEmMinutos >= inicioEmMinutos) {
        duracao = fimEmMinutos - inicioEmMinutos;
    }
    else {
        duracao = (24 * 60 - inicioEmMinutos) + fimEmMinutos;
    }

    return duracao;
}

int main() {
    int horaInicio, minutoInicio, horaFim, minutoFim, duracao;

    printf("Digite a hora de inicio do jogo (hh mm): ");
    scanf("%d %d", &horaInicio, &minutoInicio);
    printf("Digite a hora de fim do jogo (hh mm): ");
    scanf("%d %d", &horaFim, &minutoFim);

    duracao = calcularDuracao(horaInicio, minutoInicio, horaFim, minutoFim);

    printf("A duracao do jogo foi de %d minutos.\n", duracao);

    return 0;
}
