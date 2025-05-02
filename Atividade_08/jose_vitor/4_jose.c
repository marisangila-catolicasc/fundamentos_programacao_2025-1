#include<stdio.h>

int main()
{
    int valores[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    }

    printf("\nValores na ordem de entrada: \n");
    
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", valores[i]);
    }

    printf("\nValores na ordem de inversa: \n");

    for (int i = 9; i >= 0; i--)
    {
        printf("%d\n", valores[i]);
    }
    
    return 0;
}
