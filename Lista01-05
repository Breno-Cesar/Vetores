#include <stdio.h>

#define TAMANHO 10

int verificarRepeticoes(int vetor[], int tamanho, int elemento) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == elemento) {
            return 1;  
        }
    }
    return 0;  
}

int main() {
    int X[TAMANHO], Y[TAMANHO], uniao[2 * TAMANHO], diferenca[TAMANHO], soma[TAMANHO], produto[TAMANHO], intersecao[TAMANHO];
    int tamanhoUniao = 0, tamanhoDiferenca = 0, tamanhoIntersecao = 0;

    printf("Digite os 10 numeros do vetor X:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("X[%d]: ", i);
        scanf("%d", &X[i]);
    }

    printf("\nDigite os 10 numeros do vetor Y:\n");
    for (int i = 0; i < TAMANHO; i++) {
        printf("Y[%d]: ", i);
        scanf("%d", &Y[i]);
    }

    // a) União de X com Y
    for (int i = 0; i < TAMANHO; i++) {
        if (!verificarRepeticoes(uniao, tamanhoUniao, X[i])) {
            uniao[tamanhoUniao++] = X[i];
        }
    }
    for (int i = 0; i < TAMANHO; i++) {
        if (!verificarRepeticoes(uniao, tamanhoUniao, Y[i])) {
            uniao[tamanhoUniao++] = Y[i];
        }
    }

    // b) Diferença entre X e Y (elementos de X que não existem em Y)
    for (int i = 0; i < TAMANHO; i++) {
        if (!verificarRepeticoes(Y, TAMANHO, X[i])) {
            if (!verificarRepeticoes(diferenca, tamanhoDiferenca, X[i])) {
                diferenca[tamanhoDiferenca++] = X[i];
            }
        }
    }

    // c) Soma de X com Y (elementos de mesma posição)
    for (int i = 0; i < TAMANHO; i++) {
        soma[i] = X[i] + Y[i];
    }

    // d) Produto de X com Y (elementos de mesma posição)
    for (int i = 0; i < TAMANHO; i++) {
        produto[i] = X[i] * Y[i];
    }

    // e) Intersecção entre X e Y (elementos que aparecem nos dois)
    for (int i = 0; i < TAMANHO; i++) {
        if (verificarRepeticoes(Y, TAMANHO, X[i]) && !verificarRepeticoes(intersecao, tamanhoIntersecao, X[i])) {
            intersecao[tamanhoIntersecao++] = X[i];
        }
    }

    // Exibição dos resultados
    printf("\nUniao de X com Y: ");
    for (int i = 0; i < tamanhoUniao; i++) {
        printf("%d ", uniao[i]);
    }

    printf("\nDiferenca entre X e Y: ");
    for (int i = 0; i < tamanhoDiferenca; i++) {
        printf("%d ", diferenca[i]);
    }

    printf("\nSoma de X com Y: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", soma[i]);
    }

    printf("\nProduto de X com Y: ");
    for (int i = 0; i < TAMANHO; i++) {
        printf("%d ", produto[i]);
    }

    printf("\nInterseccao entre X e Y: ");
    for (int i = 0; i < tamanhoIntersecao; i++) {
        printf("%d ", intersecao[i]);
    }

    printf("\n");
    return 0;
}
