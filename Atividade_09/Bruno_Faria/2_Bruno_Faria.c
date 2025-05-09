#include <stdio.h>
int main() {

    int matriz[3][3];
    int linha;

    for (int x = 0; x < 3; x++) {

        for (int z = 0; z < 3; z++) {
            printf("digite os valores inteiros para uma matriz 3x3: [%d][%d]:\n", x, z);
            scanf("%d", &matriz[x][z]);
        }
    }
        printf("digite o numero da linha que você deseja ver (de 0 a 2):");
        scanf("%d", &linha);

        if (linha >= 0 && linha < 3) {
            printf("valores da linha %d:\n", linha);

        for (int z = 0; z < 3; z++) {
            printf("%d ", matriz[linha][z]);
        }
            printf("\n");

        } else {
            printf("A linha nao foi encontrada.\n");
    }
    return 0;
    }