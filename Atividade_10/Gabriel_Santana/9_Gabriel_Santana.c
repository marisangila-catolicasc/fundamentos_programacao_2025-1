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
    printf("Insira o número de linhas: ");
    scanf("%d", &linhas);
    printf("Insira o número de colunas: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];

    printf("Insira os elementos da matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int resultado = soma_matriz(linhas, colunas, matriz);
    printf("A soma dos elementos de dentro da matriz é: %d\n", resultado);

    return 0;
}
