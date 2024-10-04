#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main() {
    int vetor[10];
    int maior50 = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros superiores a 50 e suas posicoes:\n");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] > 50) {
            printf("Numero %d na posicao %d\n", vetor[i], i);
            maior50 = 1;
        }
    }

    if (!maior50) {
        printf("Nenhum numero superior a 50 foi encontrado.\n");
    }

    return 0;
}
