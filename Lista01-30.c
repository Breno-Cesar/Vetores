#include <stdio.h>
#include <stdlib.h>

int main() {
    char sexo[20], resposta[20];
    int totalSim = 0, totalNao = 0;
    int totalMulheresSim = 0, totalHomensNao = 0;
    int totalMulheres = 0, totalHomens = 0;

    printf("Digite o sexo (M/F) e a resposta (S/N) para cada um dos 20 entrevistados:\n");
    for (int i = 0; i < 20; i++) {
        printf("\nEntrevistado %d:\n", i + 1);
        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);

        while (sexo[i] != 'M' && sexo[i] != 'F' && sexo[i] != 'm' && sexo[i] != 'f') {
            printf("Entrada invalida! Digite novamente o sexo (M/F): ");
            scanf(" %c", &sexo[i]);
        }

        printf("Resposta (S/N): ");
        scanf(" %c", &resposta[i]);

        while (resposta[i] != 'S' && resposta[i] != 'N' && resposta[i] != 's' && resposta[i] != 'n') {
            printf("Entrada inválida! Digite novamente a resposta (S/N): ");
            scanf(" %c", &resposta[i]);
        }


        if (resposta[i] == 'S' || resposta[i] == 's') {
            totalSim++;
            if (sexo[i] == 'F' || sexo[i] == 'f') {
                totalMulheresSim++;
            }
        } else if (resposta[i] == 'N' || resposta[i] == 'n') {
            totalNao++;
            if (sexo[i] == 'M' || sexo[i] == 'm') {
                totalHomensNao++;
            }
        }

        if (sexo[i] == 'F' || sexo[i] == 'f') {
            totalMulheres++;
        } else if (sexo[i] == 'M' || sexo[i] == 'm') {
            totalHomens++;
        }
    }

    float percentualMulheresSim = (totalMulheres > 0) ? ((float)totalMulheresSim / totalMulheres) * 100 : 0;
    float percentualHomensNao = (totalHomens > 0) ? ((float)totalHomensNao / totalHomens) * 100 : 0;

    printf("\nResultados da pesquisa:\n");
    printf("Numero de pessoas que responderam SIM: %d\n", totalSim);
    printf("Numero de pessoas que responderam NAO: %d\n", totalNao);
    printf("Porcentagem de mulheres que responderam SIM: %.2f%%\n", percentualMulheresSim);
    printf("Porcentagem de homens que responderam NAO: %.2f%%\n", percentualHomensNao);

    return 0;
}
