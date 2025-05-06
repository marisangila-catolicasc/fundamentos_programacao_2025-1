#include <stdio.h>
int main() {
    int matriz[4][4];
    int soma_pares = 0, soma_linha2 = 0, maior, menor;
    int lin_maior, col_maior, lin_menor, col_menor;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            if (i % 2 == 0)
                soma_pares += matriz[i][j];
            if (i == 2)
                soma_linha2 += matriz[i][j];

            if (i == 0 && j == 0) {
                maior = menor = matriz[i][j];
                lin_maior = lin_menor = i;
                col_maior = col_menor = j;
            } else {
                if (matriz[i][j] > maior) {
                    maior = matriz[i][j];
                    lin_maior = i;
                    col_maior = j;
                }
                if (matriz[i][j] < menor) {
                    menor = matriz[i][j];
                    lin_menor = i;
                    col_menor = j;
                }
            }
        }
    }

    printf("Soma das linhas pares: %d\n", soma_pares);
    printf("Primeiro elemento: %d\n", matriz[0][0]);
    printf("Último elemento: %d\n", matriz[3][3]);
    printf("Soma da linha 2: %d\n", soma_linha2);
    printf("Diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\nMaior valor: %d na posição [%d][%d]\n", maior, lin_maior, col_maior);
    printf("Menor valor: %d na posição [%d][%d]\n", menor, lin_menor, col_menor);
    return 0;
}
