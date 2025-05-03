#include <stdio.h>
int main() {
    int matriz[2][3], soma = 0, i, j;

    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("Digite o numero da posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            soma += matriz[i][j];
        }
    }
    printf("A soma de todos os numeros da matriz e: %d", soma);
    
    return 0; 
}