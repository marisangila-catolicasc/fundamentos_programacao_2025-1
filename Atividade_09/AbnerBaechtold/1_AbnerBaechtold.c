
#include <stdio.h>

int main() {
    int matriz[2][3];
    int soma = 0;

    // Entrada dos valores da matriz
    printf("Digite os valores da matriz 2x3:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    // Exibição da soma
    printf("A soma de todos os elementos da matriz é: %d\n", soma);

    return 0;
}
