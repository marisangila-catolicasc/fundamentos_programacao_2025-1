#include <stdio.h>

int main()

{
    int numero;
    int pares = 0;
    int impares = 0;

    for(int i = 0; i < 10; i++)
    {
        printf("Digite um numero: ");
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
    printf("a quantidade de numeros pares e: %d \n", pares);
    printf("a quantidade de numeros impares e: %d \n", impares);
    return 0;
}