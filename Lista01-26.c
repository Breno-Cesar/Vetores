#include <stdio.h>
#include <stdlib.h>

void imprimirFibonacci(int N) {
    int anterior = 1, atual = 1, proximo;

    if (N == 1) {
        printf("Serie de Fibonacci: 1\n");
        return;
    } else if (N == 2) {
        printf("Serie de Fibonacci: 1, 1\n");
        return;
    }

    printf("Serie de Fibonacci: 1, 1");

    for (int i = 3; i <= N; i++) {
        proximo = anterior + atual;
        printf(", %d", proximo);
        anterior = atual;
        atual = proximo;
    }
    printf("\n");
}

int main() {
    int N;

    printf("Digite o valor de N para calcular a serie de Fibonacci: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("O valor de N deve ser um numero positivo.\n");
    } else {
        imprimirFibonacci(N);
    }

    return 0;
}
