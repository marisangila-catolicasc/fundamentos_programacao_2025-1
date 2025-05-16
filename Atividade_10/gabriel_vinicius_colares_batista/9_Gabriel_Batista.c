#include <stdio.h>

int soma_matriz(int matriz[][100], int linhas, int colunas) {
    int i, j;
    int soma = 0;

    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}
int main() {
    int linhas, colunas, i, j;
    int matriz[100][100];

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &linhas);

    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &colunas);

    printf("Digite os elementos da matriz:\n");
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int resultado = soma_matriz(matriz, linhas, colunas);

    printf("A soma de todos os elementos da matriz é: %d\n", resultado);

    return 0;
}