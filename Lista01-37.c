#include <stdio.h>

void pesquisaPopulacao(int n) {
    float salario, totalSalario = 0, maiorSalario = 0, menorSalario = 0;
    int numFilhos, totalFilhos = 0, abaixoMedia = 0, abaixo500 = 0;

    float salarios[n];

    for (int i = 0; i < n; i++) {
        printf("Pessoa %d:\n", i + 1);

        printf("Digite o salario: R$ ");
        scanf("%f", &salario);

        printf("Digite o numero de filhos: ");
        scanf("%d", &numFilhos);

        salarios[i] = salario;

        totalSalario += salario;
        totalFilhos += numFilhos;

        if (i == 0) {
            maiorSalario = salario;
            menorSalario = salario;
        } else {
            if (salario > maiorSalario) {
                maiorSalario = salario;
            }
            if (salario < menorSalario) {
                menorSalario = salario;
            }
        }

        if (salario < 500.0) {
            abaixo500++;
        }
    }

    float mediaSalario = totalSalario / n;
    float mediaFilhos = (float)totalFilhos / n;

    for (int i = 0; i < n; i++) {
        if (salarios[i] < mediaSalario) {
            abaixoMedia++;
        }
    }

    float percentualAbaixoMedia = (float)abaixoMedia / n * 100;
    float percentualAbaixo500 = (float)abaixo500 / n * 100;

    printf("\nResultados da Pesquisa:\n");
    printf("Media salarial da populacao: R$ %.2f\n", mediaSalario);
    printf("Media do numero de filhos: %.2f\n", mediaFilhos);
    printf("Maior salario: R$ %.2f\n", maiorSalario);
    printf("Menor salario: R$ %.2f\n", menorSalario);
    printf("Percentual de pessoas com salario abaixo da media: %.2f%%\n", percentualAbaixoMedia);
    printf("Percentual de pessoas com salario abaixo de R$ 500,00: %.2f%%\n", percentualAbaixo500);
}

int main() {
    int n;

    printf("Digite o numero de pessoas a serem pesquisadas: ");
    scanf("%d", &n);

    pesquisaPopulacao(n);

    return 0;
}
