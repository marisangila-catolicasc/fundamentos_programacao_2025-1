#include <stdio.h>

int main() {
    int matriz[4][4] = {
        {136, 28, 352, 45},
        {57, 663, 72, 138},
        {49, 130, 411, 99},
        {143, 14, 15, 316}
    };

    int i, j;
    int somaLinhasPares = 0;
    int somaLinha2 = 0;
    int maior = matriz[0][0];
    int menor = matriz[0][0];
    int linhaMaior = 0, colunaMaior = 0;
    int linhaMenor = 0, colunaMenor = 0;

    printf("Matriz:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (j = 0; j < 4; j++) {
        somaLinhasPares += matriz[0][j];
        somaLinhasPares += matriz[2][j];
    }

    for (j = 0; j < 4; j++) {
        somaLinha2 += matriz[1][j];
    }

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
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

    printf("\nSoma dos elementos das linhas pares: %d\n", somaLinhasPares);
    printf("Primeiro elemento: %d - Ultimo elemento: %d\n", matriz[0][0], matriz[3][3]);
    printf("Soma dos elementos da linha 2: %d\n", somaLinha2);

    printf("Elementos da Diagonal Principal: ");
    for (i = 0; i < 4; i++) {
        printf("%d", matriz[i][i]);
        if (i < 3) printf(", ");
    }
    printf("\n");

    printf("Maior valor: %d - Posicao: [%d][%d]\n", maior, linhaMaior, colunaMaior);
    printf("Menor valor: %d - Posicao: [%d][%d]\n", menor, linhaMenor, colunaMenor);

    return 0;
}