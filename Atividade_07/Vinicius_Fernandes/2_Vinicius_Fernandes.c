#include <stdio.h>

int main() {
    int opcao = 0;
    float num1, num2, resultado;
    int continuar = 1;

    while (continuar) {
        printf("\nCalculadora - Menu de Opcoes\n");
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");

        do {
            printf("Escolha uma opcao: ");
            scanf("%d", &opcao);

            if (opcao < 1 || opcao > 5) {
                printf("Opcao invalida! Tente novamente.\n");
            }
        } while (opcao < 1 || opcao > 5);

        if (opcao == 5) {
            continuar = 0;
            printf("Programa encerrado.\n");
            continue;
        }

        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);

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
                    printf("Erro: Divisao por zero!\n");
                }
                break;
        }
    }

    return 0;
}