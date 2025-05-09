#include <stdio.h>

int main()
{
    int array[2][3];
    int soma = 0;

    printf("Digite os valores da matriz\n");
    for (int i = 0; i < 2; i++)
    {
    for (int j = 0; j < 3; j++)
    {
        printf("Posicao [%d][%d]\n", i, j);
        scanf("%d", &array[i][j]);
        soma += array[i][j];
    }
    }
    printf("A soma de todos estes numeros eh de %d", soma);
    return 0;
}
