#include<stdio.h>

int main()
{
    int valores[5];
    float media;
    int soma = 0; 
    int contagem = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &valores[i]);
    
        soma += valores[i];
    }

    media = (float)soma / 5;

    printf("A media e: %.2f \n", media);
    printf("Valores acima da media: \n");

    for (int i = 0; i < 5; i++)
    {
        if (valores[i] > media) {
            
            contagem++;
            printf("%d- %d\n", contagem, valores[i]);
           
        }
    }
    
    printf("\n%d Valores estao acima da media.", contagem);

    return 0;
}
