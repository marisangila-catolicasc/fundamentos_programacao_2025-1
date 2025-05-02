#include <stdio.h>

int main() {
    int opcao = 0;
    int num1, num2;
    float resultado;

    while (opcao != 5) {
        printf("\n--- MENU DE OPCOES ---\n");
        printf("1 - Soma\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite um numero: ");
            scanf("%d", &num1);
            printf("Digite outro numero: ");
            scanf("%d", &num2);
        }

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
                    resultado = (float)num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero!\n");
                }
                break;
            case 5:
                printf("Programa encerrado.\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}
