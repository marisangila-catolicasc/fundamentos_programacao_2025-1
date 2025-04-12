#include <stdio.h>
int main()
{
    int num, soma = 0, quantidade = 8;
    float media;

    for(int i = 0; i < quantidade; i++){

        printf("Digite seu %d' numero:\n", i + 1);
        scanf("%d", &num);

        soma = num + soma;

  
    }
    media = (float)soma/quantidade;
    
    printf("A media dos %d numeros inseridos e: %.2f", quantidade, media);
    return 0;
}