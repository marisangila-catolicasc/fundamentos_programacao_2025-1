#include <stdio.h>

int main() {
    int opcao;
    float numero[2], resultado;

    do {
        printf("\nEscolha uma opção:\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        printf("Digite a opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois números:\n");
            for (int i = 0; i < 2; i++) {
                scanf("%f", &numero[i]);
            }
        }

        switch (opcao) {
            case 1:
                resultado = numero[0] + numero[1];
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2:
                resultado = numero[0] - numero[1];
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3:
                resultado = numero[0] * numero[1];
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4:
                if (numero[1] != 0) {
                    resultado = numero[0] / numero[1];
                    printf("Resultado: %.2f\n", resultado);
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

    } while (opcao != 5);

    return 0;
}