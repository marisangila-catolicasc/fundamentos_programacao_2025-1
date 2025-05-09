#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma_Linha_Pares = 0;
    int soma_Linha2 = 0;
    int maior, menor;
    int pos_MaiorLinha, pos_MaiorColuna;
    int pos_MenorLinha, pos_MenorColuna;

    printf("Digite os valores de uma matriz 4x4: \n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i % 2 == 0) {
                soma_Linha_Pares += matriz[i][j];
            }

            if (i == 2) {
                soma_Linha2 += matriz[i][j];
            }

            if (i == 0 && j == 0) {
                maior = menor = matriz[i][j];
                pos_MaiorLinha = pos_MenorColuna = i;
                pos_MaiorColuna = pos_MenorLinha = j;
            } else {
                if (matriz[i][j] > maior) {
                    maior = matriz[i][j];
                    pos_MaiorLinha = i;
                    pos_MaiorColuna = j;
                }
                if (matriz[i][j] < menor) {
                    menor = matriz[i][j];
                    pos_MenorLinha = i;
                    pos_MenorColuna = j;
                }
            }
        }
    }

    printf("\n Soma dos elementos das linhas pares: %d \n", soma_Linha_Pares);
    printf("Primeiro elemento da matriz: %d \n", matriz[0][0]);
    printf("Ultimo elemento da matriz: %d \n", matriz[3][3]);
    printf("Soma dos elementos da linha 2: %d \n", soma_Linha2);
    printf("Elementos da diagonal principal e: ");

    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }
    
    printf("\n");

    printf("Maior valor: %d (posicao [%d][%d]) \n", maior, pos_MaiorLinha, pos_MaiorColuna);
    printf("Menor valor: %d (posicao [%d][%d]) \n", menor, pos_MenorLinha, pos_MenorColuna);

    return 0;
}