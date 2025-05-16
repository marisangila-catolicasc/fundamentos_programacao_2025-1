#include <stdio.h>

int soma_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int linhas, colunas;
    printf("digite o numero de linhas da matriz: ");
    scanf("%d", &linhas);
    printf("digite o numero de colunas da matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    printf("digite os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int resultado = soma_matriz(linhas, colunas, matriz);
    printf("a soma de todos os elementos da matriz eh: %d\n", resultado);

    return 0;
}
