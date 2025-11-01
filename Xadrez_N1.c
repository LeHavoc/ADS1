#include <stdio.h>

int main(){

    int torre, bispo = 1, rainha = 1;

    printf("movimento da torre:\n"); //simulação de movimento da torre 5 casas para a direita
    for (torre = 1; torre <=5; torre++) {
        printf("Torre moveu %d casa(s) para a direita.\n", torre);
    }

    printf("Movimento do bispo:\n"); //movimento do bispo 5 casas para a diagonal direita
    while (bispo <= 5) {
        printf("Bispo se moveu %d casa(s) para cima e %d casa(s) para a direita.\n" , bispo , bispo);
        bispo++;
    }

    printf("Movimento da rainha:\n"); //movimento da rainha 8 casas para a esquerda
    do {
        printf("Rainha se moveu %d casa(s) para a esquerda.\n" , rainha);
        rainha++;
    } while (rainha <= 8);

    return 0;
}
