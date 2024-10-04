#include <stdio.h>

void gerarVetorInverso(int A[], int B[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        B[i] = A[tamanho - 1 - i];
    }
}

int main() {
    int A[10], B[10];
    int tamanho = 10;

    printf("Digite os 10 elementos do vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    gerarVetorInverso(A, B, tamanho);

    printf("\nVetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", A[i]);
    }

    printf("\n\nVetor B:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", B[i]);
    }

    printf("\n");
    return 0;
}
