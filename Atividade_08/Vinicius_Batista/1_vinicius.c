#include <stdio.h>

int main()
{
    float notas[5];
    float soma = 0.0;
    float media;
    for (int i = 0; i < 5; i++)
    {
        printf("Qual a nota numero %d?\n", i + 1);
        scanf("%f", &notas[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        soma += notas[i];
    }
    media = soma / 5;
    printf("A media das notas eh de %.1f\n", media);
    return 0;
}
