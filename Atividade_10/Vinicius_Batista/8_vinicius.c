#include <stdio.h>

int verifica_vetores_iguais(int primeiro[], int segundo[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        if (primeiro[i] != segundo[i])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int tamanho;
    printf("digite o tamanho dos vetores\n");
    scanf("%d", &tamanho);
    int array1[tamanho], array2[tamanho];

    printf("Digite os numeros do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &array1[i]);
    }
    printf("Digite os numeros do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++)
    {
        scanf("%d", &array2[i]);
    }

    printf("1 se todos os vetores forem iguais, 0 se forem diferentes\n");
    printf("%d", verifica_vetores_iguais(array1, array2, tamanho));
    return 0;
}
