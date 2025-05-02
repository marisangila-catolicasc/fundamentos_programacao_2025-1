#include<stdio.h>

int main()
{
    int numero[10];
    int num_presente, posicao = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Numero %d: ", i);
        scanf("%d", &numero[i]);
    }
    
    printf("\nDigite um numero: ");
    scanf("%d", &num_presente);

    for (int i = 0; i < 10; i++)
    {
        if (numero[i] == num_presente)
        {
            posicao = i;
        }
        
    }

    if (posicao != 0)
    {
        printf("\nEste numero esta presente na posicao: %d", posicao);
    
    } else {

        printf("\nEste numero nao esta presente em nenhuma posicao");
    }
    
    return 0;
}
