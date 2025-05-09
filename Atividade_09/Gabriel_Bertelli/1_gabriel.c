#include <stdio.h>

int main() {
    int tabela[2][3];
    int total = 0;

    printf("Digite os valores da matriz 2x3:\n");
    for (int linha = 0; linha < 2; linha++) {
        for (int coluna = 0; coluna < 3; coluna++) {
            printf("Elemento [%d][%d]: ", linha, coluna);
            scanf("%d", &tabela[linha][coluna]);
            total += tabela[linha][coluna];
        }
    }

    printf("A soma de todos os elementos dessa matriz é: %d\n", total);

    return 0;
}
