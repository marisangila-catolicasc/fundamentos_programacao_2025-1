#include <stdio.h>
#define MEDIA 7
int main()
{
    int notas[5];
    float media_notas;
    float soma;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite a nota %d:\n", i + 1);
        scanf("%d", &notas[i]);
    }
    printf("Notas acima ou iguais a media:\n");
    for (int i = 0; i < 5; i++)
    {
        if (notas[i] >= MEDIA)
        {
            printf("%d   ", notas[i]);
        }    
    }
    for (int i = 0; i < 5; i++)
    {
        soma += notas[i];
    }
    media_notas = soma / 5;
    
    printf("\nA media das notas eh de %.1f", media_notas);
    
    return 0;
}
