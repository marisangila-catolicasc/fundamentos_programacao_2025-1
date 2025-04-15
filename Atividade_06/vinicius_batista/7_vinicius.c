#include <stdio.h>

int main()
{
    float media, numeros, soma;
    for(int i = 0; i < 8; i++){
         printf("Digite um numero:\n ");
         scanf("%f", &numeros);
         soma += numeros;
    }
    media = soma / 8;
    printf("A media eh: %.1f", media);
    return 0;
}
