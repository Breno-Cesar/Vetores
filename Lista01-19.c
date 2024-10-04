#include <stdio.h>
#include <stdlib.h>

int verificaPrimo(int num) {
    if (num < 2) {
        return 0;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int primos[10];
    int cont = 0;
    int num = 101;

    while (cont < 10) {
        if (verificaPrimo(num)) {
            primos[cont] = num;
            cont++;
        }
        num++;
    }

    printf("Os dez primeiros numeros primos acima de 100 sao:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", primos[i]);
    }
    printf("\n");

    return 0;
}
