#include <stdio.h>

int main() {
    int matriz[2][3];
    int soma = 0;
    int linha, coluna;

    printf("Digite os valores da matriz 2x3:\n");

    for(linha = 0; linha < 2; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            printf("Digite o valor para a posicao [%d][%d]: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
            soma += matriz[linha][coluna];
        }
    }

    printf("\nMatriz informada:\n");
    for(linha = 0; linha < 2; linha++) {
        for(coluna = 0; coluna < 3; coluna++) {
            printf("%d\t", matriz[linha][coluna]);
        }
        printf("\n");
    }
    printf("\nA soma de todos os elementos da matriz: %d\n", soma);

    return 0;
}