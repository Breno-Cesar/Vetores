#include <stdio.h>
#include <stdlib.h>

int calcularTempo(float massaInicial) {
    int tempoSegundos = 0;
    float massaAtual = massaInicial;

    while (massaAtual >= 0.5) {
        massaAtual /= 2;
        tempoSegundos += 50;
    }

    return tempoSegundos;
}

void converterTempo(int tempoSegundos, int *horas, int *minutos, int *segundos) {
    *horas = tempoSegundos / 3600;
    tempoSegundos %= 3600;
    *minutos = tempoSegundos / 60;
    *segundos = tempoSegundos % 60;
}

int main() {
    float massaInicial;

    printf("Digite a massa inicial do material (em gramas): ");
    scanf("%f", &massaInicial);

    int tempoSegundos = calcularTempo(massaInicial);

    int horas, minutos, segundos;
    converterTempo(tempoSegundos, &horas, &minutos, &segundos);

    printf("Massa inicial: %.2f g\n", massaInicial);
    printf("Massa final: menor que 0,5 g\n");
    printf("Tempo necessario: %d horas, %d minutos e %d segundos\n", horas, minutos, segundos);

    return 0;
}
