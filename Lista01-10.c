#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

const char* Mes(int mes) {
    const char* meses[12] = {
        "Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho",
        "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"
    };
    return meses[mes];
}

int main() {
    float temperaturas[12];
    int MaiorTemp = 0, MenorTemp = 0;

    printf("Digite a temperatura media de cada mes do ano:\n");
    for (int i = 0; i < 12; i++) {
        printf("Mes %d (%s): ", i + 1, Mes(i));
        scanf("%f", &temperaturas[i]);
    }

    float maiorTemp = temperaturas[0];
    float menorTemp = temperaturas[0];

    for (int i = 1; i < 12; i++) {
        if (temperaturas[i] > maiorTemp) {
            maiorTemp = temperaturas[i];
            MaiorTemp = i;
        }
        if (temperaturas[i] < menorTemp) {
            menorTemp = temperaturas[i];
            MenorTemp = i;
        }
    }

    printf("\nMaior temperatura: %.2f°C, ocorrida em %s.\n", maiorTemp, Mes(MaiorTemp));
    printf("Menor temperatura: %.2f°C, ocorrida em %s.\n", menorTemp, Mes(MenorTemp));

    return 0;
}
