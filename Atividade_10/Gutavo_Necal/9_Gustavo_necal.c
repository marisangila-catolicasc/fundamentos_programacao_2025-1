#include <stdio.h>

int soma_matriz(int matriz[3][3], int linhas, int colunas) {
    int soma = 0;
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += matriz[i][j];
        }
    }
    return soma;
}

int main() {
    int m[3][3];
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &m[i][j]);
    printf("Soma: %d\n", soma_matriz(m, 3, 3));
    return 0;
}
