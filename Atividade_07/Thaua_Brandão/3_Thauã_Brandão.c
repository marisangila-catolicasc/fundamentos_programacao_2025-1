#include <stdio.h>

int main() {
    int matriz[4][4];
    int i, j;
    int soma_linhas_pares = 0;
    int soma_linha_2 = 0;
    int maior, menor;
    int pos_maior_i = 0, pos_maior_j = 0;
    int pos_menor_i = 0, pos_menor_j = 0;

    // Leitura da matriz
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Inicialização de maior e menor
    maior = menor = matriz[0][0];

    // Processamento
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            // Soma das linhas pares (índices 0 e 2)
            if (i % 2 == 0)
                soma_linhas_pares += matriz[i][j];

            // Soma da linha 2 (índice 1)
            if (i == 1)
                soma_linha_2 += matriz[i][j];

            // Maior e menor valor
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                pos_maior_i = i;
                pos_maior_j = j;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                pos_menor_i = i;
                pos_menor_j = j;
            }
        }
    }

    // Resultados
    printf("\nSoma dos elementos das linhas pares: %d\n", soma_linhas_pares);
    printf("Primeiro elemento: %d\n", matriz[0][0]);
    printf("Último elemento: %d\n", matriz[3][3]);
    printf("Soma dos elementos da linha 2: %d\n", soma_linha_2);
    
    printf("Elementos da diagonal principal: ");
    for (i = 0; i < 4; i++)
        printf("%d ", matriz[i][i]);
    printf("\n");

    printf("Maior valor: %d na posição [%d][%d]\n", maior, pos_maior_i, pos_maior_j);
    printf("Menor valor: %d na posição [%d][%d]\n", menor, pos_menor_i, pos_menor_j);

    return 0;
}