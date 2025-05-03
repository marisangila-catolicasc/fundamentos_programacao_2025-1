#include <stdio.h>

int main() {
    int matriz[2][3];
    int soma = 0;
    int i, j;

    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("Digite um numero [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }

    printf("A soma de todos os elementos da matriz e: %d\n", soma);
    
    return 0;
}