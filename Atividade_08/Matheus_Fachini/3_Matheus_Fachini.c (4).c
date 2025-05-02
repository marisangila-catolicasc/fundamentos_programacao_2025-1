#include <stdio.h>

int main()
{
    int nums[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero para a posicao %d:\n", i + 1);
        scanf("%d", &nums[i]);
    }
    
    printf("Numeros na ordem:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", nums[i]);
    }
    printf("\nNumeros na ordem contraria\n");
    for (int i = 9; i >= 0; i--)
    {
        printf("%d  ", nums[i]);
    }
    

    return 0;
}