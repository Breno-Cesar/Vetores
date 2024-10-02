#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[15];
    int P[5], I[5];
    int contP = 0, contI = 0;

    printf("Digite 15 valores inteiros:\n");
    for (int i = 0; i < 15; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] % 2 == 0) {
            P[contP] = vetor[i];
            contP++;

            if (contP == 5) {
                printf("\nVetor P cheio (pares):\n");
                for (int j = 0; j < 5; j++) {
                    printf("%d ", P[j]);
                }
                printf("\n");
                contP = 0;
            }
        } else {
            I[contI] = vetor[i];
            contI++;

            if (contI == 5) {
                printf("\nVetor I cheio (impares):\n");
                for (int j = 0; j < 5; j++) {
                    printf("%d ", I[j]);
                }
                printf("\n");
                contI = 0;
            }
        }
    }

    printf("\nNumeros restantes no vetor P (pares):\n");
    for (int j = 0; j < contP; j++) {
        printf("%d ", P[j]);
    }

    printf("\nNumeros restantes no vetor I (ímpares):\n");
    for (int j = 0; j < contI; j++) {
        printf("%d ", I[j]);
    }
    printf("\n");

    return 0;
}
