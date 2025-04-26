#include <stdio.h>

int main()

{
    float num1, num2;
    int operacao;

    printf("digite dois numeros: \n");
    scanf("%f %f", &num1, &num2);

    while (operacao != 5)
    {
        printf("digite a operacaoo que você deseja realizar: \n");
        printf("1 - soma\n");
        printf("2 - subtracao\n");
        printf("3 - multiplicacao\n");
        printf("4 - divisao\n");
        printf("5 - sair\n");
        scanf("%d", &operacao);

        switch (operacao)
        {
        case 1:
            printf("soma: %.1f\n", num1 + num2);
            break;
        case 2:
            printf("subtracao: %.1f\n", num1 - num2);
            break;
        case 3:
            printf("multiplicacao: %.1f\n", num1 * num2);
            break;
        case 4:
            if (num2 == 0)
            {
                printf("não eh possivel dividir por 0:\n");
                break;
            }
            printf("divisao: %f\n", num1 / num2);
            break;
        case 5:
            printf("saindo...\n");
            break;

        default:
            printf("nenhuma opção eh válida: \n ");
            break;
        }
    }

    return 0;
}