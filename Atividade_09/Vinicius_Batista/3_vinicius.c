#include <stdio.h>

int main()
{
    int array[4][4];
    int row_par = 0;
    int row2_soma = 0;
    int maior, menor;
    int row_maior, column_maior;
    int row_menor, column_menor;

    printf("Digite os valores da matriz:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Posicoa na matriz [%d][%d]\n", i, j);
            scanf("%d", &array[i][j]);
            if (i == 0 && j == 0)
            {
                maior = menor = array[i][j];
                row_maior = column_maior = 0;
                row_menor = column_menor = 0;
            }
            if (i % 2 == 0)
            {
                row_par += array[i][j];
            }
            if (i == 2)
            {
                row2_soma += array[i][j];
            }
            if (array[i][j] > maior)
            {
                maior = array[i][j];
                row_maior = i;
                column_maior = j;
            }
            if (array[i][j] < menor)
            {
                menor = array[i][j];
                row_menor = i;
                column_menor = j;
            }
        }
    }
  int primeiro = array[0][0];
  int ultimo = array[3][3];

  printf("\nSoma dos numeros das linhas pares: %d\n", row_par);
    printf("Primeiro numero da matriz: %d\n", primeiro);
    printf("Ultimo numero da matriz: %d\n", ultimo);
    printf("Soma dos numeros da linha 2: %d\n", row2_soma);

    printf("Diagonal Principal: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", array[i][i]);
    }
    printf("\n");

    printf("Maior valor eh %d e esta na posicao [%d][%d]\n", maior, row_maior, column_maior);
    printf("Menor valor eh %d e esta na posicao [%d][%d]\n", menor, row_menor, column_menor);

    return 0;
}