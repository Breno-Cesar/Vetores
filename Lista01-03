#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

#define TAMANHO 10

int main() {
    int vetor1[TAMANHO], vetor2[TAMANHO], vetorIntercalado[2 * TAMANHO];

    printf("Digite os 10 elementos do primeiro vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    printf("\nDigite os 10 elementos do segundo vetor:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }

    for (int i = 0; i < TAMANHO; i++) {
        vetorIntercalado[2 * i] = vetor1[i];
        vetorIntercalado[2 * i + 1] = vetor2[i];
    }

    printf("\nVetor intercalado:\n");
    for (int i = 0; i < 2 * TAMANHO; i++) {
        printf("%d ", vetorIntercalado[i]);
    }
    printf("\n");

    return 0;
}
