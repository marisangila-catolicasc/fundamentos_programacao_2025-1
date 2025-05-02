#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        
        printf("\n=== MENU DE OPERACOES ===\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);

            printf("Digite o segundo número: ");
            scanf("%f", &num2);
        }

        switch(opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado da soma: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado da subtracao: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado da multiplicacao: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da divisao: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero nao permitida.\n");
                }
                break;
            case 5:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}
