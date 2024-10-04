#include <stdio.h>

void somaVetores(int A[], int B[], int C[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    int A[5], B[5], C[5];
    int tamanho = 5;

    printf("Digite os 5 elementos do vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite os 5 elementos do vetor B:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    somaVetores(A, B, C, tamanho);

    printf("\nO vetor C resultante da soma de A e B e:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
