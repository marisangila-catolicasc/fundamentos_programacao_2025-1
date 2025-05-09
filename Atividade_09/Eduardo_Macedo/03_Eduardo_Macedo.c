#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int somaLinhasPares = 0, somaLinha2 = 0;
    int maiorValor, menorValor;
    int linhaMaior, colunaMaior, linhaMenor, colunaMenor;
    int diagonal[4];

    // Leitura dos valores da matriz
    printf("Preencha a matriz 4x4 com números inteiros:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicialização do maior e menor com o primeiro valor
    maiorValor = menorValor = matriz[0][0];
    linhaMaior = linhaMenor = 0;
    colunaMaior = colunaMenor = 0;

    // Processamento da matriz
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {

            // Soma das linhas pares (índices 0 e 2)
            if (i % 2 == 0) {
                somaLinhasPares += matriz[i][j];
            }

            // Soma da segunda linha (índice 1)
            if (i == 1) {
                somaLinha2 += matriz[i][j];
            }

            // Verifica maior valor
            if (matriz[i][j] > maiorValor) {
                maiorValor = matriz[i][j];
                linhaMaior = i;
                colunaMaior = j;
            }

            // Verifica menor valor
            if (matriz[i][j] < menorValor) {
                menorValor = matriz[i][j];
                linhaMenor = i;
                colunaMenor = j;
            }
        }

        // Armazena os valores da diagonal principal
        diagonal[i] = matriz[i][i];
    }

    // Exibição dos resultados
    printf("\n--- Resultados ---\n");
    printf("Soma das linhas pares (0 e 2): %d\n", somaLinhasPares);
    printf("Primeiro elemento: %d\n", matriz[0][0]);
    printf("Último elemento: %d\n", matriz[3][3]);
    printf("Soma dos elementos da linha 1: %d\n", somaLinha2);

    printf("Diagonal principal: ");
    for (i = 0; i < 4; i++) {
        printf("%d ", diagonal[i]);
    }
    printf("\n");

    printf("Maior valor: %d (posição [%d][%d])\n", maiorValor, linhaMaior, colunaMaior);
    printf("Menor valor: %d (posição [%d][%d])\n", menorValor, linhaMenor, colunaMenor);

    return 0;
}
