#include <stdio.h>>

int main(int argc, char const *argv[])
{

    int soma = 0;
    for (int i = 0; i <= 100; i++)
    {
        soma = soma + i;
    }
    printf("A soma dos primeiros 100 numeros naturais e %d ", soma);
    
    return 0;
}
