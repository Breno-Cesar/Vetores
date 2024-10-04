#include <stdio.h>

int somaDivisores(int n) {
    int soma = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            soma += i;
        }
    }

    return soma;
}

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    int resultado = somaDivisores(n);
    printf("A soma dos divisores de %d e: %d\n", n, resultado);

    return 0;
}
