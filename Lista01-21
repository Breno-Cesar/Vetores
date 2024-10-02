#include <stdio.h>
#include <stdlib.h>

void verificarTriangulo(int A, int B, int C) {
    if (A + B > C && A + C > B && B + C > A) {
        if (A == B && B == C) {
            printf("O triangulo e Equilatero.\n");
        } else if (A == B || B == C || A == C) {
            printf("O triangulo e Isosceles.\n");
        } else {
            printf("O triangulo e Escaleno.\n");
        }
    } else {
        printf("Nao e triangulo.\n");
    }
}

int main() {
    int A, B, C;

    printf("Digite o valor do lado A: ");
    scanf("%d", &A);
    printf("Digite o valor do lado B: ");
    scanf("%d", &B);
    printf("Digite o valor do lado C: ");
    scanf("%d", &C);

    verificarTriangulo(A, B, C);

    return 0;
}
