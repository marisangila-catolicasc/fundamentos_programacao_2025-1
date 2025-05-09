#include <stdio.h>

int main() {
    int matriz[3][3];  
    int i, j;  
    int linha; 

    printf("Digite os elementos da matriz:\n");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Digite a linha que deseja ver: ");
    scanf("%d", &linha);

    if (linha < 0 || linha > 2) {
        printf("Essa linha não existe! Digite a linha 0, 1 ou 2.\n");
    } else {
        printf("Valores da linha %d: ", linha);
        for (j = 0; j < 3; j++) {
            printf("%d ", matriz[linha][j]);
        }
        printf("\n");
    }

    return 0; 
}
