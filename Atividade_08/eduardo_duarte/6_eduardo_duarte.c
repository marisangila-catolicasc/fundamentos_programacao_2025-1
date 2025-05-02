#include <stdio.h>
#define TAMANHO 20

int main()
{
    int nums[TAMANHO];
    for (int i = 0; i < 20; i++)
    {
        printf("Digite um numero para a posicao %d\n", i + 1);
        scanf("%d", &nums[i]);
    }
    printf("\nNumeros Pares:\n");
    for (int i = 0; i < 20; i++)
    {
        if (nums[i] % 2 == 0)
        {
            printf("%d  ", nums[i]);
        }
    }

    return 0;
}