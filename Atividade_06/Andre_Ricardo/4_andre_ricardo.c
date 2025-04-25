#include <stdio.h>

int main()
{
    float media, nota, soma;
    for (int i = 0; i < 10; i++){
        printf("Digite a nota:\n ");
        scanf("%f", &nota);
        soma += nota;
    }
    media = soma / 10;
    printf("Sua media eh %.1f", media);
    return 0;
}
