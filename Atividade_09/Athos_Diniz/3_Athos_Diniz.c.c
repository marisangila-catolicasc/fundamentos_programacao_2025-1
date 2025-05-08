#include <stdio.h>

int main() {
    int matriz[4][4];
    int somaLinhaPares = 0;
    int somaLinha2 = 0;
    int maior, menor;
    int posMaiorLinha, posMaiorColuna;
    int posMenorLinha, posMenorColuna;

    printf("Digite os valores da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i % 2 == 0) {
                somaLinhasPares += matriz[i][j];
            }

            if (i == 2) {
                somaLinha2 += matriz[i][j];
            }

            if (i == 0 && j == 0) {
                maior = menor = matriz[i][j];
                posMaiorLinha = posMenorLinha = i;
                posMaiorColuna = posMenorColuna = j;
            } else {
                if (matriz[i][j] > maior) {
                    maior = matriz[i][j];
                    posMaiorLinha = i;
                    posMaiorColuna = j;
                }
                if (matriz[i][j] < menor) {
                    menor = matriz[i][j];
                    posMenorLinha = i;
                    posMenorColuna = j;
                }
            }
        }
    }

    printf("\nSoma dos elementos das linhas pares: %d\n", somaLinhasPares);
    printf("Primeiro elemento da matriz: %d\n", matriz[0][0]);
    printf("Último elemento da matriz: %d\n", matriz[3][3]);
    printf("Soma dos elementos da linha 2: %d\n", somaLinha2);

    printf("Elementos da diagonal principal é: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\n");

    printf("Maior valor: %d (posição [%d][%d])\n", maior, posMaiorLinha, posMaiorColuna);
    printf("Menor valor: %d (posição [%d][%d])\n", menor, posMenorLinha, posMenorColuna);

    return 0;
}
