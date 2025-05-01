#include <stdio.h>

int main()
{
    int numb[20];
    int numero, contagem = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite um numero para a casa de numero %d\n", i + 1);
        scanf("%d", &numb[i]);
    }
    printf("\nDigite o numero que quer conferir:\n");
    scanf("%d", &numero);
    for (int i = 0; i < 20; i++)
    {
        if (numero == numb[i])
        {
            contagem++;
        }
    }
    if (contagem > 0)
    {
        printf("\nO numero %d apareceu %d vezes dentro do vetor", numero, contagem);
    }else
    {
        printf("\nO numero nao esta no vetor");
    }
    return 0;
}
