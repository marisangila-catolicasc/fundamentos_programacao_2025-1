#include <stdio.h>
int main() {
    int matriz[3][3];
    int linha;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor da posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite a linha que deseja exibir (0 a 2): ");
    scanf("%d", &linha);
    if (linha >= 0 && linha < 3) {
        printf("Valores da linha %d:\n", linha);
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[linha][j]);
        }
        printf("\n");
    } else {
        printf("Linha inválida!\n");
    }
    return 0;
}