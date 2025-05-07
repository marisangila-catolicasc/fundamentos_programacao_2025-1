#include <stdio.h>

int main() {
    float matriz[2][3];
    float sum = 0;
    
    printf("Digite os valores da matriz!");
    
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }
    
    for (int i=0; i<2; i++) {
        for (int j=0; j<3; j++) {
            sum += matriz[i][j];
        }
    }
    
    printf("A soma de todos os valores da matriz eh igual a %.2f!", sum);

    return 0;
}
