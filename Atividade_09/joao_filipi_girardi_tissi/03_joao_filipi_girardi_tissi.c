#include <stdio.h>

int main() {
    int matriz[4][4]; 
    int i, j;
    int soma_pares = 0;
    int soma_linha2 = 0;
    int maior, menor;
    int linha_maior, col_maior, linha_menor, col_menor;


    printf("Digite os valores da matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i == 0 && j == 0) {
                maior = menor = matriz[i][j];
                linha_maior = linha_menor = 0;
                col_maior = col_menor = 0;
            }

            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                col_maior = j;
            }

            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha_menor = i;
                col_menor = j;
            }
        }
    }

    for (i = 0; i < 4; i += 2) {
        for (j = 0; j < 4; j++) {
            soma_pares += matriz[i][j];
        }
    }

    for (j = 0; j < 4; j++) {
        soma_linha2 += matriz[2][j];
    }

    printf(" Soma dos elementos das linhas pares: %d\n", soma_pares);

    printf(" Primeiro elemento: %d\n", matriz[0][0]);
    printf(" Último elemento: %d\n", matriz[3][3]);

    printf(" Soma dos elementos da linha 2: %d\n", soma_linha2);

    printf(" Diagonal Principal: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf(" Maior valor: %d (posição [%d][%d])\n", maior, linha_maior, col_maior);
    printf(" Menor valor: %d (posição [%d][%d])\n", menor, linha_menor, col_menor);
    return 0;
}
