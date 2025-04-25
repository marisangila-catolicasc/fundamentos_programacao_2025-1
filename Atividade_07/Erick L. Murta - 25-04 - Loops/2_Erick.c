#include "stdio.h"

int main(void){
    int opcao;
    double num1, num2, resultado;

    
    
    while (opcao != 5)
    {
        printf("\n=== MENU ===\n");
        printf("[1] - Somar\n");
        printf("[2] - Subtrair\n");
        printf("[3] - Multiplicar\n");
        printf("[4] - Dividir\n");
        printf("[5] - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%lf", &num1);
            printf("Digite o segundo número: ");
            scanf("%lf", &num2);
        }

        switch(opcao) { 
            case 1:
                resultado = num1 + num2;
                printf("Resultado da soma: %.2lf\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado da subtração: %.2lf\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado da multiplicação: %.2lf\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da divisão: %.2lf\n", resultado);
                } else {
                    printf("Erro: divisão por zero!\n");
                }
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }

    };
}