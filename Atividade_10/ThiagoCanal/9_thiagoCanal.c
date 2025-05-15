#include <stdio.h>
#include <stdlib.h>

int soma_matriz(int m[][100], int linhas, int colunas);

int main(void) {
    int lin, colu;

    printf("Quantas linhas: ");
    scanf("%d", &lin);

    printf("Quantas colunas: ");
    scanf("%d", &colu);

    int matriz[100][100];

    for (int i = 0; i < lin; i++) {
        for (int j = 0; j < colu; j++) {
            printf("valor[%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    system("cls");

    for (int i = 0; i < lin; i++) {
        printf("[%d] ", i);
        for (int j = 0; j < colu; j++) {
            if (j == colu - 1) {
                printf("%d", matriz[i][j]);
            } else {
                printf("%d, ", matriz[i][j]);
            }
        }
        printf("\n");
    }

    int soma_tudo = soma_matriz(matriz, lin, colu);

    printf("Soma da matriz: %d\n", soma_tudo);
}

int soma_matriz(int m[][100], int linhas, int colunas) {
    int soma = 0;

    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            soma += m[i][j];
        }
    }

    return soma;
}
