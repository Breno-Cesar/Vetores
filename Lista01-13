#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int jogadas[20];
    int contagem[6] = {0};

    printf("Digite os numeros sorteados em 20 jogadas do dado: \n");
    for (int i = 0; i < 20; i++) {
        do {
            printf("Jogada %d: ", i + 1);
            scanf("%d", &jogadas[i]);

            if (jogadas[i] < 1 || jogadas[i] > 6) {
                printf("Valor invalido. Digite um número entre 1 e 6.\n");
            }
        } while (jogadas[i] < 1 || jogadas[i] > 6);

        contagem[jogadas[i] - 1]++;
    }

    printf("\nNumeros sorteados nas jogadas:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", jogadas[i]);
    }
    printf("\n");

    printf("\nFrequencia dos numeros sorteados:\n");
    for (int i = 0; i < 6; i++) {
        printf("Numero %d apareceu %d vezes).\n", i + 1, contagem[i]);
    }

    return 0;
}
