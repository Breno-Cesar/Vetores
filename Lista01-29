#include <stdio.h>
#include <stdlib.h>

int main() {
    char sexo[15], corOlhos[15], corCabelos[15];
    int idade[15];
    int somaIdade = 0, maiorIdade, menorIdade, numHomens = 0, numMulheres = 0;
    int mulheresIdadeAcimaMedia = 0, homensOlhosCastanhos = 0, mulheresOlhosVerdesCabelosLouros = 0;

    printf("Digite os dados das 15 pessoas:\n");
    for (int i = 0; i < 15; i++) {
        printf("Pessoa %d:\n", i + 1);

        printf("Sexo (M/F): ");
        scanf(" %c", &sexo[i]);

        printf("Cor dos olhos (A = Azul, V = Verde, C = Castanho): ");
        scanf(" %c", &corOlhos[i]);

        printf("Cor dos cabelos (L = Louros, C = Castanhos, P = Pretos): ");
        scanf(" %c", &corCabelos[i]);

        printf("Idade: ");
        scanf("%d", &idade[i]);

        if (i == 0) {
            maiorIdade = menorIdade = idade[i];
        }

        if (idade[i] > maiorIdade) {
            maiorIdade = idade[i];
        }
        if (idade[i] < menorIdade) {
            menorIdade = idade[i];
        }

        somaIdade += idade[i];

        if (sexo[i] == 'M' || sexo[i] == 'm') {
            numHomens++;
            if (corOlhos[i] == 'C' || corOlhos[i] == 'c') {
                homensOlhosCastanhos++;
            }
        } else if (sexo[i] == 'F' || sexo[i] == 'f') {
            numMulheres++;

            if ((corOlhos[i] == 'V' || corOlhos[i] == 'v') &&
                (corCabelos[i] == 'L' || corCabelos[i] == 'l') &&
                idade[i] >= 18 && idade[i] <= 35) {
                mulheresOlhosVerdesCabelosLouros++;
            }
        }
    }

    float mediaIdade = (float)somaIdade / 15;

    for (int i = 0; i < 15; i++) {
        if ((sexo[i] == 'F' || sexo[i] == 'f') && idade[i] > mediaIdade) {
            mulheresIdadeAcimaMedia++;
        }
    }

    float percentualHomens = (numHomens / (float)15) * 100;
    float percentualMulheresAcimaMedia = (numMulheres > 0) ? (mulheresIdadeAcimaMedia / (float)numMulheres) * 100 : 0;
    float percentualHomensOlhosCastanhos = (numHomens > 0) ? (homensOlhosCastanhos / (float)numHomens) * 100 : 0;
    float percentualMulheresVerdesLouros = (numMulheres > 0) ? (mulheresOlhosVerdesCabelosLouros / (float)numMulheres) * 100 : 0;

    printf("\nResultados da pesquisa:\n");
    printf("A maior idade da turma: %d\n", maiorIdade);
    printf("A menor idade da turma: %d\n", menorIdade);
    printf("A media de idade da turma: %.2f\n", mediaIdade);
    printf("O percentual de homens: %.2f%%\n", percentualHomens);
    printf("O percentual de mulheres com idade acima da média: %.2f%%\n", percentualMulheresAcimaMedia);
    printf("O percentual de homens com olhos castanhos: %.2f%%\n", percentualHomensOlhosCastanhos);
    printf("O numero de mulheres: %d\n", numMulheres);
    printf("A porcentagem de mulheres com idade entre 18 e 35 anos, olhos verdes e cabelos louros: %.2f%%\n", percentualMulheresVerdesLouros);

    return 0;
}
