#include<stdio.h>

int main()
{
    int maior = 0, menor = 0;
    int valor[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valor[i]);
    }

    maior = valor[0];
    menor = valor[0];

    for (int i = 0; i < 5; i++)
    {
        if (valor[i] > maior)
        {
            maior = valor[i];
        }
        
        if (valor[i] < menor) 
        {
            menor = valor[i];            
        }
    }

    printf("Numero maior: %d\n", maior);
    printf("Numero menor: %d\n", menor);
    
    return 0;
}
