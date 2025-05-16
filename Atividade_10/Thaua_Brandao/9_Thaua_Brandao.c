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
int mat[2][2] = {{1, 2}, {3, 4}};
    printf("Soma: %d\n", soma_matriz(2, 2, mat));

    return 0;
}