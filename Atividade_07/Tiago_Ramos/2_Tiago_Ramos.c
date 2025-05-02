#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n--- CALCULADORA SIMPLES ---\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("Digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %f\n", resultado);
                } else {
                    printf("Erro: Não da para dividir por 0!\n");
                }
                break;
            case 5:
                printf("Encerrando...\n");
                break;
            default:
                printf("Opção invalida! Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}
