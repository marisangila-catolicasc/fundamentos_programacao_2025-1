#include <stdio.h>

int main() {
    int matriz[2][3];
    int soma = 0;
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para a posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }
    
    printf("A soma de todos os elementos da matriz e: %d\n", soma);
    
    return 0;
}
