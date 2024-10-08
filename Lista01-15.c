#include <stdio.h>
#include <stdlib.h>

int main() {
    float vetor[5];
    int codigo;

    printf("Digite 5 numeros reais:\n");
    for (int i = 0; i < 5; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%f", &vetor[i]);
    }

    printf("\nDigite o codigo (0 para finalizar, 1 para ordem direta, 2 para ordem inversa): ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 0:
            printf("Programa finalizado.\n");
            break;
        case 1:
            printf("Vetor na ordem direta:\n");
            for (int i = 0; i < 5; i++) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        case 2:
            printf("Vetor na ordem inversa:\n");
            for (int i = 5 - 1; i >= 0; i--) {
                printf("%.2f ", vetor[i]);
            }
            printf("\n");
            break;
        default:
            printf("Codigo invalido. Programa finalizado.\n");
    }

    return 0;
}
