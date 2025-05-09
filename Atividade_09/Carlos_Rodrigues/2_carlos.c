#include <stdio.h>
int main() {
    
    int matriz[3][3];
    int linha;
    
    for (int x = 0; x < 3; x++) {
        
        for (int z = 0; z < 3; z++) {
            printf("Digite a quantidade da posição [%d][%d]:\n", x, z);
            scanf("%d", &matriz[x][z]);
        }
    }
        printf("Digite a linha que deseja mostrar de (0 a 2):");
        scanf("%d", &linha);
    
        if (linha >= 0 && linha < 3) {
            printf("Valores da linha %d:\n", linha);
        
        for (int z = 0; z < 3; z++) {
            printf("%d ", matriz[linha][z]);
        }
            printf("\n");
          
        } else {
            printf("Linha nao encontrada!\n");
    }
    return 0;
    }
