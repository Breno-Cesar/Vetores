#include <stdio.h>

int ehPerfeito(int num) {
    int soma = 0;

    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    return soma == num;
}

void imprimirNumerosPerfeitos(int n) {
    int contador = 0;
    int numero = 1;

    printf("Os %d primeiros numeros perfeitos sao:\n", n);

    while (contador < n) {
        if (ehPerfeito(numero)) {
            printf("%d\n", numero);
            contador++;
        }
        numero++;
    }
}

int main() {
    int n;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    imprimirNumerosPerfeitos(n);

    return 0;
}
