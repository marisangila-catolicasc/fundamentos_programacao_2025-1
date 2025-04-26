#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        // Exibe o menu
        printf("\n--- MENU ---\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        // Se a opção for de 1 a 4, pede os dois números
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro número: ");
            scanf("%f", &num1);
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
        }

        // Executa a operação de acordo com a escolha
        switch (opcao) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisão por zero não é permitida.\n");
                }
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
