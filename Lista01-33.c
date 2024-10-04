#include <stdio.h>

int somaDivisiveis(int A, int B, int C) {
    int soma = 0;

    for (int i = B; i <= C; i++) {
        if (i % A == 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {
    int A, B, C;

    printf("Digite o valor de A: ");
    scanf("%d", &A);
    printf("Digite o valor de B: ");
    scanf("%d", &B);
    printf("Digite o valor de C: ");
    scanf("%d", &C);

    int resultado = somaDivisiveis(A, B, C);
    printf("A soma dos inteiros entre %d e %d que sao divisiveis por %d e: %d\n", B, C, A, resultado);

    return 0;
}
