#include <stdio.h>

int main() {
    int grid[4][4];
    int somaPares = 0;
    int somaTerceiraLinha = 0;
    int valorMax, valorMin;
    int linhaMax, colunaMax;
    int linhaMin, colunaMin;

    printf("Digite os valores da matriz 4x4:\n");
    for (int linha = 0; linha < 4; linha++) {
        for (int coluna = 0; coluna < 4; coluna++) {
            printf("Elemento [%d][%d]: ", linha, coluna);
            scanf("%d", &grid[linha][coluna]);

            if (linha % 2 == 0) {
                somaPares += grid[linha][coluna];
            }

            if (linha == 2) {
                somaTerceiraLinha += grid[linha][coluna];
            }

            if (linha == 0 && coluna == 0) {
                valorMax = valorMin = grid[linha][coluna];
                linhaMax = linhaMin = linha;
                colunaMax = colunaMin = coluna;
            } else {
                if (grid[linha][coluna] > valorMax) {
                    valorMax = grid[linha][coluna];
                    linhaMax = linha;
                    colunaMax = coluna;
                }
                if (grid[linha][coluna] < valorMin) {
                    valorMin = grid[linha][coluna];
                    linhaMin = linha;
                    colunaMin = coluna;
                }
            }
        }
    }

    printf("\nSoma dos elementos das linhas pares: %d\n", somaPares);
    printf("Primeiro elemento da matriz: %d\n", grid[0][0]);
    printf("Último elemento da matriz: %d\n", grid[3][3]);
    printf("Soma dos elementos da linha 2: %d\n", somaTerceiraLinha);

    printf("Elementos da diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", grid[i][i]);
    }
    printf("\n");

    printf("Maior valor: %d (posição [%d][%d])\n", valorMax, linhaMax, colunaMax);
    printf("Menor valor: %d (posição [%d][%d])\n", valorMin, linhaMin, colunaMin);

    return 0;
}
