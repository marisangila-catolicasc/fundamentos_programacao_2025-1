#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha;
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    printf("Digite o numero da linha que deseja ver (0, 1 ou 2): ");
    scanf("%d", &linha);
    
    if (linha >= 0 && linha < 3) {
        printf("Valores da linha %d: ", linha);
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[linha][j]);
        }
        printf("\n");
    } else {
        printf("Linha invalida!\n");
    }
    
    return 0;
}