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
    printf("O valor final de numeros pares eh de: %d\n", pares);
    printf("O valor final de numeros impares eh de: %d\n", impares);
    
    return 0;
}
