#include <stdio.h>

int main() {
    
    int matriz[3][3];
    int line;
    
    printf("Digite os valores da matriz! \n");
    
    for (int i=0; i<3; i++) {
        for (int j=0; j<3; j++) {
            printf("Matriz [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    
    printf("Voce deseja ver os valores de qual linha: ");
    scanf("%d", &line);
    
    for (int i=0; i<3; i++) {
        printf("Matriz[%d][%d]: %d! \n", line, i, matriz[line][i]);
    }

    return 0;
}
