#include <stdio.h>

int fatorial(int x) {
    int resultado = 1;

    for (int i = 1; i <= x; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int x;

    printf("Digite um numero inteiro para calcular o fatorial: ");
    scanf("%d", &x);

    if (x < 0) {
        printf("Fatorial nao e definido para números negativos.\n");
    } else {
        printf("O fatorial de %d e: %d\n", x, fatorial(x));
    }

    return 0;
}
