#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[8], num, j;

    printf("Digite 8 numeros inteiros:\n");

    for (int i = 0; i < 8; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &num);

        j = i - 1;
        while (j >= 0 && vetor[j] > num) {
            vetor[j + 1] = vetor[j];
            j--;
        }

        vetor[j + 1] = num;
    }

    printf("\nVetor ordenado:\n");
    for (int i = 0; i < 8; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    return 0;
}
