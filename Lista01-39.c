#include <stdio.h>


int multiplicarArray(int array[], int tamanho) {
    int resultado = array[0];

    for (int i = 1; i < tamanho; i++) {
        resultado *= array[i];
    }

    return resultado;
}

int main() {
    int array[10];
    int tamanho = 10;

    printf("Digite os 10 numeros inteiros do array:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &array[i]);
    }

    int resultado = multiplicarArray(array, tamanho);

    printf("\nO valor final das multiplicacoes e: %d\n", resultado);

    return 0;
}
