#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha;

    printf("Digite os valores da matriz 3x3 (3 valores por linha separados por espaço):\n");
    for (int i = 0; i < 3; i++) {
        printf("Linha %d: ", i);
        scanf("%d %d %d", &matriz[i][0], &matriz[i][1], &matriz[i][2]);
    }

    printf("Digite o número da linha que deseja ver (0, 1 ou 2): ");
    scanf("%d", &linha);

    if (linha >= 0 && linha < 3) {
        printf("Valores da linha %d: ", linha);
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[linha][j]);
        }
        printf("\n");
    } else {
        printf("Linha inválida. Digite 0, 1 ou 2.\n");
    }

    return 0;
}
