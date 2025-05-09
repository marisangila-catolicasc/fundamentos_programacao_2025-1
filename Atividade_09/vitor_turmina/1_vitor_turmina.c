#include <stdio.h>
#include <stdlib.h>

int main(){

    int matriz[2][3], soma = 0;
    
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("Digite o numero para a posicao [%d][%d]\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
            soma += matriz[i][j];
        }

    printf("\n");

    }
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            printf("[ %d ]", matriz[i][j]);
        }
        printf("\n");
    }
    printf("A soma dessa matriz eh: %d", soma);

    system("\npause");
return 0;
}