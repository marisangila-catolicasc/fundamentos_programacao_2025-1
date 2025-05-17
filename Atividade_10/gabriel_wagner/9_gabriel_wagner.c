
#include <stdio.h>

int soma_matriz(int mat[3][3]) {
    int soma = 0;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            soma += mat[i][j];
    return soma;
}

int main() {
    int mat[3][3];
    printf("Digite os elementos da matriz 3x3: ");
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            scanf("%d", &mat[i][j]);
    printf("A soma dos elementos é: %d\n", soma_matriz(mat));
    return 0;
}
