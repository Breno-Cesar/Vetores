#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    char vetorA[20], vetorB[20];
    char temp;

    printf("Digite 20 caracteres para o vetor A:\n");
    for (int i = 0; i < 20; i++) {
        printf("vetorA[%d]: ", i + 1);
        scanf(" %c", &vetorA[i]);
    }

    printf("\nDigite 20 caracteres para o vetor B:\n");
    for (int i = 0; i < 20; i++) {
        printf("vetorB[%d]: ", i + 1);
        scanf(" %c", &vetorB[i]);
    }

    printf("\nVetores antes da troca:\n");
    printf("vetorA: ");
    for (int i = 0; i < 20; i++) {
        printf("%c ", vetorA[i]);
    }

    printf("\nvetorB: ");
    for (int i = 0; i < 20; i++) {
        printf("%c ", vetorB[i]);
    }

    for (int i = 0; i < 20; i++) {
        temp = vetorA[i];
        vetorA[i] = vetorB[20 - 1 - i];
        vetorB[20 - 1 - i] = temp;
    }

    printf("\n\nVetores depois da troca:\n");
    printf("vetorA: ");
    for (int i = 0; i < 20; i++) {
        printf("%c ", vetorA[i]);
    }

    printf("\nVetor B: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%c ", vetorB[i]);
    }

    printf("\n");

    return 0;
}
