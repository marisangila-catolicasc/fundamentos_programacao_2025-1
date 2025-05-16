#include <stdio.h>

int verificar_primo(int numero)
{
    for (int i = 2; i < numero; i++)
        if (numero % i == 0)
            return 0;
    return 1;
}

int main(int argc, char const *argv[])
{
    if (verificar_primo(1))
        printf("Primo!\n");
    else
        printf("Nao eh primo!\n");
    return 0;
}