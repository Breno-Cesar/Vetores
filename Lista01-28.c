#include <stdio.h>
#include <stdlib.h>

void calcularInformacoes(float alturas[], int sexos[]) {
    float maiorAltura = alturas[0], menorAltura = alturas[0];
    float somaAlturasTurma = 0, somaAlturasMulheres = 0;
    int contMulheres = 0;

    for (int i = 0; i < 10; i++) {
        if (alturas[i] > maiorAltura) {
            maiorAltura = alturas[i];
        }
        if (alturas[i] < menorAltura) {
            menorAltura = alturas[i];
        }

        somaAlturasTurma += alturas[i];

        if (sexos[i] == 2) {
            somaAlturasMulheres += alturas[i];
            contMulheres++;
        }
    }

    float mediaAlturaTurma = somaAlturasTurma / 10;
    float mediaAlturaMulheres = contMulheres > 0 ? somaAlturasMulheres / contMulheres : 0;

    printf("\nA maior altura da turma: %.2f\n", maiorAltura);
    printf("A menor altura da turma: %.2f\n", menorAltura);
    if (contMulheres > 0) {
        printf("A media de altura das mulheres: %.2f\n", mediaAlturaMulheres);
    } else {
        printf("Nao ha mulheres na turma.\n");
    }
    printf("A media de altura da turma: %.2f\n", mediaAlturaTurma);
}

int main() {
    float alturas[10];
    int sexos[10];

    printf("Digite a altura e o codigo do sexo de cada um dos 10 alunos (1 == masculino, 2 == feminino):\n");
    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Altura: ");
        scanf("%f", &alturas[i]);
        printf("Código do sexo (1 == masculino, 2 == feminino): ");
        scanf("%d", &sexos[i]);

        while (sexos[i] != 1 && sexos[i] != 2) {
            printf("Codigo invalido. Digite novamente (1 == masculino, 2 == feminino): ");
            scanf("%d", &sexos[i]);
        }
    }
    calcularInformacoes(alturas, sexos);

    return 0;
}
