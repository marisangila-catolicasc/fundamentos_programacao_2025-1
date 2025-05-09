#include <stdio.h>

int main() {
    int matriz[2][3], soma = 0;

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite um numero para a posição [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }
    }

    printf("A soma dos elementos da matriz é: %d\n", soma);

    return 0;
}