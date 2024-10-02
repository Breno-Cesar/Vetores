#include <stdio.h>
#include <stdlib.h>

void mostrarMapaOcupacao(int janela[], int corredor[]) {
    printf("\nMapeamento do Onibus:\n");
    printf("Janela\t\tCorredor\n");
    for (int i = 0; i < 24; i++) {
        printf("Poltrona %d: %s\t\tPoltrona %d: %s\n",
               i + 1, (janela[i] == 0 ? "Livre" : "Ocupada"),
               i + 1, (corredor[i] == 0 ? "Livre" : "Ocupada"));
    }
    printf("\n");
}

int venderPassagem(int janela[], int corredor[]) {
    int tipo, numeroPoltrona;

    printf("Deseja assento na janela (1) ou corredor (2)? ");
    scanf("%d", &tipo);

    if (tipo != 1 && tipo != 2) {
        printf("Opcao invalida. Escolha 1 para janela ou 2 para corredor.\n");
        return 0;
    }

    printf("Digite o numero da poltrona (1 a 24): ");
    scanf("%d", &numeroPoltrona);

    if (numeroPoltrona < 1 || numeroPoltrona > 24) {
        printf("Numero de poltrona invalido. Escolha entre 1 e 24.\n");
        return 0;
    }

    if (tipo == 1) {
        if (janela[numeroPoltrona - 1] == 0) {
            janela[numeroPoltrona - 1] = 1;
            printf("Venda efetivada. Poltrona %d na janela foi ocupada.\n", numeroPoltrona);
        } else {
            printf("Poltrona %d na janela já está ocupada.\n", numeroPoltrona);
        }
    } else if (tipo == 2) {
        if (corredor[numeroPoltrona - 1] == 0) {
            corredor[numeroPoltrona - 1] = 1;
            printf("Venda efetivada. Poltrona %d no corredor foi ocupada.\n", numeroPoltrona);
        } else {
            printf("Poltrona %d no corredor já esta ocupada.\n", numeroPoltrona);
        }
    }

    return 1;
}

int verificarOnibusLotado(int janela[], int corredor[]) {
    for (int i = 0; i < 24; i++) {
        if (janela[i] == 0 || corredor[i] == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int janela[24] = {0};
    int corredor[24] = {0};
    int opcao;

    do {
        printf("\nEscolha uma opcao:\n");
        printf("1. Vender passagem\n");
        printf("2. Mostrar mapa de ocupacao\n");
        printf("3. Encerrar\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (verificarOnibusLotado(janela, corredor)) {
                    printf("Onibus lotado. Nao ha mais poltronas disponiveis.\n");
                } else {
                    venderPassagem(janela, corredor);
                }
                break;

            case 2:
                mostrarMapaOcupacao(janela, corredor);
                break;

            case 3:
                printf("Programa encerrado.\n");
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
