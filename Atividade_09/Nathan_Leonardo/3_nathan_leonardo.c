#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {5, 7, 6, 9},
        {3, 4, 2, 1},
        {22, 33, 44, 55},
        {79, 14, 69, 88}
    };

    int somatorio = 0, soma_i_2 = 0;
    int maior = matriz[0][0], menor = matriz[0][0];
    int linhaMaior = 0, colunaMaior = 0;
    int linhaMenor = 0, colunaMenor = 0;

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (i % 2 == 0) {
                somatorio += matriz[i][j];
            }
        }
    }

    for (int j = 0; j < 4; j++) {
        soma_i_2 += matriz[2][j];
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }
    }

    printf("Soma dos valores das linhas pares da matriz: %d", somatorio);
    printf("\nO primeiro valor da matriz e %d e o ultimo e %d", matriz[0][0], matriz[3][3]);
    printf("\nA soma dos valores da linha 2 e: %d", soma_i_2);
    printf("\nValores da diagonal principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }

    printf("\nMaior valor da matriz: %d na linha %d e coluna %d", maior, linhaMaior + 1, colunaMaior + 1);
    printf("\nMenor valor da matriz: %d na linha %d e coluna %d\n", menor, linhaMenor + 1, colunaMenor + 1);

    return 0;
}
