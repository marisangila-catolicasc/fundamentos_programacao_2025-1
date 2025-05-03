#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha, i, j;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Digite o numero da linha que deseja ver os valores (0, 1 ou 2): ");
    scanf("%d", &linha);
    printf("Valores da linha %d:\n", linha);
    for(j = 0; j < 3; j++) {
        printf("%d ", matriz[linha][j]);
    }
    
    return 0;
}