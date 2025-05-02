
#include <stdio.h>

int main() {
    int opcao;
    float a, b, resultado;

    do {
        printf("\n--- Menu ---\n");
        printf("1. Soma\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Número 1: ");
            scanf("%f", &a);
            printf("Número 2: ");
            scanf("%f", &b);
        }

        switch (opcao) {
            case 1:
                resultado = a + b;
                printf("Resultado da soma: %.2f\n", resultado);
                break;
            case 2:
                resultado = a - b;
                printf("Resultado da subtração: %.2f\n", resultado);
                break;
            case 3:
                resultado = a * b;
                printf("Resultado da multiplicação: %.2f\n", resultado);
                break;
            case 4:
                if (b != 0) {
                    resultado = a / b;
                    printf("Resultado da divisão: %.2f\n", resultado);
                } else {
                    printf("Não é possível dividir por zero.\n");
                }
                break;
            case 5:
                printf("Programa finalizado.\n");
                break;
            default:
                printf("Escolha inválida!\n");
        }
    } while (opcao != 5);

    return 0;
}
