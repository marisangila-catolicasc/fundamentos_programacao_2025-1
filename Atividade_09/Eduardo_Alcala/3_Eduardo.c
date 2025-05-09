#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int somaLinha2 = 0;
    int maior, menor;
    int posMaiorI, posMaiorJ, posMenorI, posMenorJ;

    printf("Digite os valores da matriz 4x4:\n");
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);

            if(i == 0 && j == 0) {
                maior = menor = matriz[i][j];
                posMaiorI = posMenorI = 0;
                posMaiorJ = posMenorJ = 0;
            }

            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                posMaiorI = i;
                posMaiorJ = j;
            }

            if(matriz[i][j] < menor) {
                menor = matriz[i][j];
                posMenorI = i;
                posMenorJ = j;
            }

            if(i == 1) {
                somaLinha2 += matriz[i][j];
            }
        }
    }

    printf("\nPrimeiro elemento: %d\n", matriz[0][0]);
    printf("Último elemento: %d\n", matriz[3][3]);
    printf("Soma da linha 2: %d\n", somaLinha2);

    printf("Diagonal principal: ");
    for(i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\nMaior valor: %d (posição [%d][%d])\n", maior, posMaiorI, posMaiorJ);
    printf("Menor valor: %d (posição [%d][%d])\n", menor, posMenorI, posMenorJ);

    return 0;
}
