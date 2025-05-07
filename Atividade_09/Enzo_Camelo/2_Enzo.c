#include <stdio.h>

int main() {
    int matriz[3][3], linha;

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero para a posição [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Qual linha você deseja ver?\n[0], [1] ou [2]\n");
    scanf("%d", &linha);

    printf("\nLinha [%d]: ", linha);
    for (int j = 0; j < 3; j++) {
        printf("[%d] ", matriz[linha][j]);
    }

    return 0;
}