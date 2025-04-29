#include <stdio.h>

int main()
{
    int n1, n2;
    int operacao;
    int sair;
    float resultado;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);
    printf("Digite maius um numero inteiro:\n");
    scanf("%d", &n2);
    do
    {
        printf("Escolha o numero de uma operacao:\n 1-Soma\n 2-Subtrair\n 3-Multiplicacao\n 4-Divisao\n 5-Sair (fechar operacao)\n");
        scanf("%d", &operacao);
        switch (operacao)
        {
        case 1:
           resultado = n1 + n2;
            printf("\nA soma de %d e %d eh de %.0f\n", n1, n2 , resultado);
            break;

        case 2:
           resultado = n1 - n2;
           printf("\nA subtracao de %d e %d eh de %.0f\n", n1, n2 , resultado);
            break;

        case 3:
           resultado = n1 * n2 ;
           printf("\nA multiplicacao de %d e %d eh de %.0f\n", n1, n2 , resultado);
            break;

        case 4:
           resultado = n1 / n2;
           printf("\nA divisao de %d e %d eh de %.0f\n", n1, n2 , resultado);
            break;

        case 5:
           resultado = sair = 1;
            break;
        default:
            printf("\nComando nao reconhecido");
            break;
        }
    } while (sair == 0);

    return 0;
}
