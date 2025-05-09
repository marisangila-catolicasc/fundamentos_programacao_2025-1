
#include <stdio.h>

int main() {
    int matriz[4][4];
    int soma_pares = 0, soma_linha2 = 0;
    int maior = -2147483648, menor = 2147483647;
    int pos_maior[2], pos_menor[2];

    // Entrada dos valores da matriz
    printf("Digite os valores da matriz 4x4:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);

            if (i % 2 == 0) soma_pares += matriz[i][j];
            if (i == 2) soma_linha2 += matriz[i][j];
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                pos_maior[0] = i;
                pos_maior[1] = j;
            }
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                pos_menor[0] = i;
                pos_menor[1] = j;
            }
        }
    }

    // Exibição dos resultados
    printf("Soma dos elementos das linhas pares: %d\n", soma_pares);
    printf("Primeiro elemento: %d\n", matriz[0][0]);
    printf("Último elemento: %d\n", matriz[3][3]);
    printf("Soma dos elementos da linha 2: %d\n", soma_linha2);
    printf("Diagonal Principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", matriz[i][i]);
    }
    printf("\nMaior valor: %d na posição [%d][%d]\n", maior, pos_maior[0], pos_maior[1]);
    printf("Menor valor: %d na posição [%d][%d]\n", menor, pos_menor[0], pos_menor[1]);

    return 0;
}
