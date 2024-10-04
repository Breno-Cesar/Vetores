#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

void ordenarCrescente(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[TAMANHO];

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    ordenarCrescente(vetor, TAMANHO);

    printf("\nVetor ordenado em ordem crescente:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
