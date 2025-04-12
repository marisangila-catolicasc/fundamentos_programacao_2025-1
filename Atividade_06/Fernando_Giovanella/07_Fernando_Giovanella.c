#include <stdio.h>

int main()
{

    float numero, soma;

    for(int i = 0; i < 8; i++){
        printf("Digite um numero: ");
        scanf("%f", &numero);
        soma += numero;
    }

    printf("A media das oito notas eh %.2f", soma / 8);

    return 0;
}