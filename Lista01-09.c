#include <stdio.h>
#include <stdlib.h>

int main() {
    char gabarito[8];
    int numeroAluno[10], nota[10];
    char respostas[10][8];
    int aprovados = 0;


    printf("Digite o gabarito da prova (8 respostas):\n");
    for (int i = 0; i < 8; i++) {
        printf("Questão %d: ", i + 1);
        scanf(" %c", &gabarito[i]);
    }


    for (int i = 0; i < 10; i++) {
        printf("\nDigite o numero de matricula do aluno %d: ", i + 1);
        scanf("%d", &numeroAluno[i]);

        printf("Digite as respostas do aluno %d:\n", numeroAluno[i]);
        for (int j = 0; j < 8; j++) {
            printf("Questao %d: ", j + 1);
            scanf(" %c", &respostas[i][j]);
        }
    }


    for (int i = 0; i < 10; i++) {
        nota[i] = 0;

        for (int j = 0; j < 8; j++) {
            if (respostas[i][j] == gabarito[j]) {
                nota[i]++;
            }
        }

        if (nota[i] >= 6) {
            aprovados++;
        }

        printf("\nAluno %d obteve nota: %d", numeroAluno[i], nota[i]);
    }

    float porcentagemAprovacao = (float)aprovados / 10 * 100;
    printf("\n\nPorcentagem de aprovacao: %.2f%%\n", porcentagemAprovacao);

    return 0;
}
