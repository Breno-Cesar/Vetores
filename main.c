#include <stdio.h>
#include <stdlib.h>
#define TAMANHO 10

// Função para ordenar o vetor em ordem crescente (utilizando o algoritmo de bolha - Bubble Sort)
void ordenarCrescente(int vetor[], int tamanho) {
    int temp;
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                // Troca os elementos de posição
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

int main() {
    int vetor[TAMANHO];

    // Entrada dos elementos do vetor
    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    // Ordenar o vetor em ordem crescente
    ordenarCrescente(vetor, TAMANHO);

    // Exibir o vetor ordenado
    printf("\nVetor ordenado em ordem crescente:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
