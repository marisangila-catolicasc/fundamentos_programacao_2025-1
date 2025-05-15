#include <stdio.h>

int soma_matriz(int rows, int columns, int array[rows][columns])
{
    int soma = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            soma += array[i][j];
        }
    }
    return soma;
}

int main()
{
    int row, column;
    printf("Digite o numero de linhas da matriz:\n");
    scanf("%d", &row);
    printf("Digite o numero de colunas da matriz:\n");
    scanf("%d", &column);

    int array[row][column];
    printf("Digite os numeros da matriz\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            scanf("%d", &array[i][j]);
        }
    }
    
    printf("a soma eh %d", soma_matriz(row, column, array));
    return 0;
}