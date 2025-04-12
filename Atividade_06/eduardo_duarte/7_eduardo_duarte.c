#include <stdio.h>

int main()

{
    float soma, num;

    for (int i = 0; i < 8; i++)
    {
        printf("digite um numero: \n");
        scanf("%f", &num);
        soma += num;
    }
    printf("a media e: %.1f", soma / 8);

    return 0;
}