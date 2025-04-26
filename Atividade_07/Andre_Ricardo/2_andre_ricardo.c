#include <stdio.h>

int main() {
    int op;
    float num1, num2, resultado;

    do {
        printf("Menu de opcoes:\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("escolha uma opcao: ");
        scanf("%d", &op);

        if (op >= 1 && op <= 4) {
            printf("digite o primeiro numero: ");
            scanf("%f", &num1);
            printf("digite o segundo numero: ");
            scanf("%f", &num2);
        }

        switch (op) {
            case 1:
                resultado = num1 + num2;
                printf("Resultado da soma: %.2f\n", resultado);
                break;
            case 2:
                resultado = num1 - num2;
                printf("resultado da subtracao: %.2f\n", resultado);
                break;
            case 3:
                resultado = num1 * num2;
                printf("resultado da multiplicacao: %.2f\n", resultado);
                break;
            case 4:
                if (num2 != 0) {
                    resultado = num1 / num2;
                    printf("Resultado da divisao: %.2f\n", resultado);
                } else {
                    printf("erro, divisao por zero.\n");
                }
                break;
            case 5:
                printf("saindo do programa\n");
                break;
            default:
                printf("opcao invalida! tente novamente.\n");
        }

    } while (op != 5);

    return 0;
}
