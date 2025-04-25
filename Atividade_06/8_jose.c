#include <stdio.h>

int main()
{
    int numero, maior = 0;

    for (int i = 0; i <= 10; i++)
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);

        if (numero > maior)
        {
            maior = numero;
        }
    }

    printf("O maior numero foi: %d", maior);    
    
    return 0;
}