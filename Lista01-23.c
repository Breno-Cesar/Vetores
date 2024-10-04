#include <stdio.h>
#include <stdlib.h>

float calcularMedia(float alturas[], int tamanho) {
    float soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += alturas[i];
    }
    return soma / tamanho;
}

void contarAlturas(float alturas[], int tamanho) {
    float media = calcularMedia(alturas, tamanho);
    int abaixoMedia = 0, acimaMedia = 0, estaturaMediana = 0;

    for (int i = 0; i < tamanho; i++) {
        if (alturas[i] < media) {
            abaixoMedia++;
        } else if (alturas[i] > media) {
            acimaMedia++;
        } else {
            estaturaMediana++;
        }
    }

    printf("\nResultados:\n");
    printf("Numero de mulheres com altura ABAIXO da media: %d\n", abaixoMedia);
    printf("Numero de mulheres com altura ACIMA da media: %d\n", acimaMedia);
    printf("Numero de mulheres com estatura MEDIANA (igual a media): %d\n", estaturaMediana);
}

int main() {
    float alturas[5];

    printf("Digite a altura de 5 mulheres:\n");
    for (int i = 0; i < 5; i++) {
        printf("Mulher %d: ", i + 1);
        scanf("%f", &alturas[i]);
    }

    contarAlturas(alturas, 5);

    return 0;
}
