#include <stdio.h>
#include <stdlib.h>

void ordenar(int vetor[], int tamanho) {
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
    int vetor1[5], vetor2[5], vetor3[10];


    printf("Digite os 5 elementos do primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor1[i]);
    }


    printf("\nDigite os 5 elementos do segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor2[i]);
    }


    ordenar(vetor1, 5);
    ordenar(vetor2, 5);


    printf("\nPrimeiro vetor ordenado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor1[i]);
    }

    printf("\nSegundo vetor ordenado:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", vetor2[i]);
    }


    for (int i = 0; i < 5; i++) {
        vetor3[i] = vetor1[i];
        vetor3[i + 5] = vetor2[i];
    }


    ordenar(vetor3, 10);

    printf("\n\nVetor unido e ordenado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", vetor3[i]);
    }
    printf("\n");

    return 0;
}
