#include <stdio.h>
int main() {
    
    int matriz[2][3];
    int soma = 0;
    
    for (int x = 0; x < 2; x++) {
        
        for (int z = 0; z < 3; z++) {
            printf("Digite o valor da posição[%d][%d]:\n", x, z);
            scanf("%d", &matriz[x][x]);
            soma += matriz[x][z];
        }
    }
            printf("Soma dos elementos: %d\n", soma);
    return 0;
}
