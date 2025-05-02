#include <stdio.h>

int main() {
    int opcao;
    float a, b, resultado;

    do {
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite o primeiro numero:\n");
            scanf("%f", &a);
            printf("Digite o segundo numero:\n");
            scanf("%f", &b);
        }

        switch (opcao) {
            case 1:
                resultado = a + b;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = a - b;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = a * b;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (b != 0) {
                    resultado = a / b;
                    printf("Resultado: %.2f\n", resultado);
                } else {
                    printf("Erro: divisao por zero.\n");
                }
                break;
            case 5:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção invalida.\n");
        }
    } while (opcao != 5);

    return 0;
}