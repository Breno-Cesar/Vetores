#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetorA[10];
    int vetorRepet[10] = {0};

    printf("Digite 10 numeros inteiros para o vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("vetor A[%d]: ", i + 1);
        scanf("%d", &vetorA[i]);
    }

    for (int i = 0; i < 10; i++) {
        for (int j = i + 1; j < 10; j++) {
            if (vetorA[i] == vetorA[j]) {
                vetorRepet[i]++;
            }
        }
    }

    printf("\nNumeros repetidos e suas quantidades:\n");
    int elemRepet = 0;
    for (int i = 0; i < 10; i++) {
        if (vetorRepet[i] > 0) {
            elemRepet = 1;
            printf("Numero %d aparece %d vez(es).\n", vetorA[i], vetorRepet[i] + 1);
        }
    }

    if (!elemRepet) {
        printf("Nenhum numero repetido.\n");
    }

    return 0;
}
