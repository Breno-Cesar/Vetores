#include <stdio.h>
#include <stdlib.h>

void calcularMediaPonderada(int N) {
    float nota, peso, somaPesos = 0, somaNotasPonderadas = 0;

    for (int i = 0; i < N; i++) {
        printf("Digite a nota da avaliacao %d: ", i + 1);
        scanf("%f", &nota);
        printf("Digite o peso da avaliacao %d: ", i + 1);
        scanf("%f", &peso);

        somaNotasPonderadas += nota * peso;
        somaPesos += peso;
    }

    float mediaPonderada = somaNotasPonderadas / somaPesos;

    printf("\nA media ponderada e: %.2f\n", mediaPonderada);
}

int main() {
    int N;
    printf("Digite o numero de avaliacoes: ");
    scanf("%d", &N);
    calcularMediaPonderada(N);

    return 0;
}
