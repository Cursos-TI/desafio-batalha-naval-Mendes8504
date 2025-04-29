#include <stdio.h>

int main() {
    int tabuleiro[10][10];

    // Inicializando a matriz com zeros
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posicionando um navio horizontalmente (3 espaços)
    int navio1x = 2, navio1y = 5;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio1x][navio1y + i] = 3;
    }

    // Posicionando um navio verticalmente (3 espaços)
    int navio2x = 6, navio2y = 3;
    for (int i = 0; i < 3; i++) {
        tabuleiro[navio2x + i][navio2y] = 3;
    }

    // Exibir letras no topo
    printf("    "); // Espaço para alinhar com a numeração vertical
    for (char letra = 'A'; letra <= 'J'; letra++) {
        printf("%2c ", letra);
    }
    printf("\n");

    // Exibir tabuleiro com numeração na vertical
    for (int i = 0; i < 10; i++) {
        printf("%2d | ", i); // Número da linha à esquerda
        for (int j = 0; j < 10; j++) {
            printf("%d  ", tabuleiro[i][j]); // Exibir valores da matriz
        }
        printf("\n");
    }

    return 0;
}
