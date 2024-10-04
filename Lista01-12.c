#include <stdio.h>
#include <stdlib.h>

int main() {
    int vetor[10], x;
    int cont = 0;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);

        if (vetor[i] == x) {
            cont++;
        }
    }

    if (cont> 0) {
        printf("\nO valor %d ocorre %d vezes no vetor.\n", x, cont);
    } else {
        printf("\nO valor %d nao ocorre no vetor.\n", x);
    }

    return 0;
}
