#include <stdio.h>
int main(int argc, char const *argv[])
{
    int soma = 0;

    for (int i = 0; i <= 100; i++)
    {
        soma = i + soma;
    }
    printf("A soma dos 100 primeiros numeros naturais e: %d\n", soma);

    return 0;
}