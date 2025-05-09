#include <stdio.h>
#include <stdlib.h>

int main()
{

    int matriz[3][3], linha;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("Digite o numero para a posicao [%d][%d]\n", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\nA matriz ficou assim:\n");
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++)
            printf("[ %d ]", matriz[i][j]);

        printf("\n");
    }

    printf("Escolha qual linha da matriz voce quer:\n");
    scanf("%d", &linha);
    printf("Os valores dessa linha sao: ");

    for (int j = 0; j < 3; j++)
        printf("[%d]", matriz[linha - 1][j]);


   system("\npause");
return 0;
}