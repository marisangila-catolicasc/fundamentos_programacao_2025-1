#include <stdio.h>

int main()
{
    int numb[15];
    int soma = 0;

    for (int i = 0; i < 15; i++)
    {
        printf("Digite um numero para a posicao %d no vetor:\n", i);
        scanf("%d", &numb[i]);
    }
    for (int i = 0; i < 15; i++)
    {
        if (i % 2 != 0)
        {
            soma += numb[i];
        }
    }
    printf("\n A soma das posicoes impares eh %d", soma);

    return 0;
}