#include <stdio.h>
#include <stdlib.h>

int numprimo(int num){
    if(num<2){
        return 0;
    }
    for(int i=2; i<=num/2; i++){
        if(num%i==0){
            return 0;
        }
    }
    return 1;
}

int main()
{
    int vetor[9];

    printf("Digite 9 numeros inteiros: \n");
    for(int i=0; i<9; i++){
        printf("Numero %d: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros primos e suas respectivas posicoes:\n");
    int primoEncontrado = 0;

    for (int i = 0; i < 9; i++) {
        if (numprimo(vetor[i]) == 1) {
            printf("Numero primo %d na posicao %d\n", vetor[i], i);
            primoEncontrado = 1;
        }
    }


    return 0;
}
