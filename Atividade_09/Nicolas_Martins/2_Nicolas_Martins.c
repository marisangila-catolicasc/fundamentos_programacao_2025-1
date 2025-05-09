#include <stdio.h>
int main() {
 int m[3][3], l;

    for (int i = 0; i < 3; i++)
    for (int j = 0; j < 3; j++) {

        
        printf("Digite o valor da matriz [%d][%d]: ", i, j);
        scanf("%d", &m[i][j]);
        }

    printf("Digite a linha que deseja ver (0-2): ");
    scanf("%d", &l);
    

    if (l >= 0 && l < 3) {
        for (int j = 0; j < 3; j++)
        printf("%d ", m[l][j]);
        printf("\n");

        
    } else {
        printf("Opcão inválida.\n");
        
    }

    return 0;
}

