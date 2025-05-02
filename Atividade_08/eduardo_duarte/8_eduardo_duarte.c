#include <stdio.h>

int main()
{
    int numb[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int numero;
    int presente = 0;

    printf("Digite um numero que deseja encontrar:\n");
    scanf("%d", &numero);

    for (int i = 0; i < 10; i++)
    {
        if (numb[i] == numero)
        {
            printf("O numero %d esta presente na posicao %d", numero, i);
            presente = 1;
        }
    }
    if (!presente)
    {
        printf("\nO numero nao esta presente");
    }

    return 0;
}