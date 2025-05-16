#include <stdio.h>

int soma_matriz(int l, int c, int m[l][c]) {
    int soma = 0;
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++)
            soma += m[i][j];
    return soma;
}

int main() {
    int m[2][2] = {{1, 2}, {3, 4}};
    printf("Soma: %d\n", soma_matriz(2, 2, m));
    return 0;
}
