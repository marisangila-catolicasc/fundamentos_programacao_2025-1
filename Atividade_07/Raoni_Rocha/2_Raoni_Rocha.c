#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    do {
        printf("\n1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Digite sua opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("\nDigite um numero: ");
            scanf("%f", &num1);
            printf("Digite outro numero: ");
            scanf("%f", &num2);

            switch (opcao) {
                case 1:
                    resultado = num1 + num2;
                    printf("\nResultado da soma: %.2f\n", resultado);
                    break;
                case 2:
                    resultado = num1 - num2;
                    printf("\nResultado da subtracao: %.2f\n", resultado);
                    break;
                case 3:
                    resultado = num1 * num2;
                    printf("\nResultado da multiplicacao: %.2f\n", resultado);
                    break;
                case 4:
                    if (num2 != 0) {
                        resultado = num1 / num2;
                        printf("\nResultado da divisao: %.2f\n", resultado);
                    } else {
                        printf("\nErro divisao por zero\n");
                    }
                    break;
            }
        } else if (opcao != 5) {
            printf("\nOpcao invalida, Tente novamente.\n");
        }

    } while (opcao != 5);

    printf("\nPrograma encerrado.\n");
    return 0;
}
