#include <stdio.h>

int main() 
{
    int vetor[15];
    int soma = 0;
    
    for (int i = 0; i < 15; i++) 
    {
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 15; i++) 
    {
        if (i % 2 != 0) 
        { 
            soma += vetor[i];
        }
    }

    printf("\nA soma dos elementos nas posicoes impares e: %d\n", soma);

    return 0;
}
