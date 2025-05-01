#include <stdio.h>

int main()
{
    int num[10];
    int inversor[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o numero pra posicao %d:\n", i + 1);
        scanf("%d", &num[i]);
    }for (int i = 0; i < 10; i++)
    {
        inversor[i] = num[9 - i];
    }

    printf("\nOs numeros na ordem inversa sao:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", inversor[i]);
    }
    
    
}
