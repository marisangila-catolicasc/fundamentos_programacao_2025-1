#include<stdio.h>

int main()
{
    int numero[20];
    int pares = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero[i]);
        
        if (numero[i] % 2 == 0)
        {
            pares++;
        }
    }

    printf("%d desses numeros sao pares", pares);


    return 0;
}
