#include<stdio.h>
#include<stdlib.h>

int main()
{
    float valores[5];
    float media = 0, soma = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor: ");
        scanf("%f", &valores[i]);
    
        soma += valores[i];
    }

    media = soma / 5;

    printf("A media dos valores e: %.2f", media);
    
    return 0;
}
