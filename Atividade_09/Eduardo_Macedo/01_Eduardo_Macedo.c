#include <stdio.h>

int main() {
    int valores [1][2];
    int somaTotal = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o valor para a posição [%d][%d]: ", i, j);
            scanf("%d", &valores[i][j]);
            somaTotal += valores[i][j];
        }    
    }
    printf("A soma total dos valores é: %d\n", somaTotal);
    return 0;
}