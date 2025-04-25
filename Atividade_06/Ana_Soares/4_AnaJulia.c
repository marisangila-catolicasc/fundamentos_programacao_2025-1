#include <stdio.h>
int main()
{
    int numero, pares = 0, impares = 0;

    for (int i = 0; i < 10; i++)
    {

        printf("Digite o %d numero:", i + 1);
        scanf("%d", &numero);

        if (numero % 2 == 0)
        {
            pares++;
        }
        else
        {
            impares++;
        }
    }
    printf("A quantidade de numeros pares sao: %d\n", pares);
    printf("A quantidade de numeros impares sao: %d\n", impares);
    
    return 0;
}
