#include <stdio.h>
int main() {
    int matriz[2][3];
    int somatorio = 0;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            somatorio += matriz[i][j];
        }
    }
    printf("\nO somatario eh: %d\n", somatorio);
    return 0;
}