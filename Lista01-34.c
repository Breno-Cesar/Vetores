#include <stdio.h>


float calcularMedia(float nota1, float nota2, float nota3, char tipoMedia) {
    if (tipoMedia == 'A' || tipoMedia == 'a') {
        return (nota1 + nota2 + nota3) / 3;
    } else if (tipoMedia == 'P' || tipoMedia == 'p') {
        return (nota1 * 5 + nota2 * 3 + nota3 * 2) / (5 + 3 + 2);
    } else {
        printf("Tipo de media invalido.\n");
        return -1;
    }
}

int main() {
    float nota1, nota2, nota3;
    char tipoMedia;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite o tipo de media: ");
    scanf(" %c", &tipoMedia);

    float media = calcularMedia(nota1, nota2, nota3, tipoMedia);

    if (media != -1) {
        printf("A media calculada e: %.2f\n", media);
    }

    return 0;
}
