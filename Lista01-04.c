#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int vetor[8], positivos[8], negativos[8];
    int contPos = 0, contNeg = 0;

    printf("Digite 8 numeros inteiros:\n");
    for (int i = 0; i < 8; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] >= 0) {
            positivos[contPos] = vetor[i];
            contPos++;
        } else {
            negativos[contNeg] = vetor[i];
            contNeg++;
        }
    }

    printf("\nVetor de numeros positivos:\n");
    if (contPos > 0) {
        for (int i = 0; i < contPos; i++) {
            printf("%d ", positivos[i]);
        }
    } else {
        printf("Nenhum numero positivo.");
    }

    printf("\n\nVetor de numeros negativos:\n");
    if (contNeg> 0) {
        for (int i = 0; i < contNeg; i++) {
            printf("%d ", negativos[i]);
        }
    } else {
        printf("Nenhum numero negativo.");
    }

    printf("\n");

    return 0;
}
