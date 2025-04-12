#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota, notas, media;
    


    for (int i = 0; i < 8; i++)
    {
        printf("Digite uma nota \n");
        scanf("%f", &nota);
        notas = notas + nota;
    }

    media = notas/8;

    printf("A Media das notas eh %f ", media);
        

    return 0;
}
