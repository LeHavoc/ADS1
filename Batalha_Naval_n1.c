#include <stdio.h>

int main() {
    // Tamanho fixo do tabuleiro
    int tabuleiro[10][10] = {0};

    // Posicionando o navio vertical
    for (int i = 0; i < 3; i++) {
        tabuleiro[2 + i][4] = 3;  // O navio vertical começa na linha 2 e coluna 4
    }

    // Posicionando o navio horizontal
    for (int i = 0; i < 3; i++) {
        tabuleiro[6][1 + i] = 3;  // O navio horizontal começa na linha 6 e coluna 1
    }

    // Exibição do tabuleiro
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
