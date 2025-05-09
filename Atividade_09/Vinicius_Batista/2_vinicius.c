#include <stdio.h>

int main()
{
    int array[3][3];
    int row;

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Posicao [%d][%d]\n", i, j);
            scanf("%d", &array[i][j]);
        }
    }
    printf("Digite a linha que quer conferir (Lembrando que a matriz comeca pela posicao 0):\n");
    scanf("%d", &row);
    if (row >= 0 && row < 3)
    {
       for (int i = 0; i < 3; i++)
       {
        printf("%d  ", array[row][i]);
       }
       
    }else{
        printf("ta inventando moda hein?");
    }
    
    return 0;
}
