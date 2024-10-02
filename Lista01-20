#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[15];
    int encontrar30 = 0;

    printf("Digite 15 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nVerificando se ha o numero 30...\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] == 30) {
            printf("Numero 30 encontrado na posicao %d.\n", i + 1);
            encontrar30 = 1;
        }
    }

    if (!encontrar30) {
        printf("O numero 30 nao foi encontrado no vetor.\n");
    }

    return 0;
}
