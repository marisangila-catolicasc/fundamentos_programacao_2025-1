#include <stdio.h>

int main() {
int opcao;
float n1, n2, res;

    do {
        printf("\n--- MENU DE OPÇÕES ---\n");
        printf("1 - Soma\n");
        printf("2 - Subtração\n");
        printf("3 - Multiplicação\n");
        printf("4 - Divisão\n");
        printf("5 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite um número:\n");
            scanf("%f", &n1);
            printf("Digite digite outro número:\n");
            scanf("%f", &n2);
        }

        switch (opcao) {
            case 1:
                res = n1 + n2;
                printf("Resultado: %.2f\n", res);
                break;
            case 2:
                res = n1 - n2;
                printf("Resultado: %.2f\n", res);
                break;
            case 3:
                res = n1 * n2;
                printf("Resultado: %.2f\n", res);
                break;
            case 4:
                if (n2 != 0) {
                    res = n1 / n2;
                    printf("Resultado: %.2f\n", res);
                } else {
                    printf("A divisão não pode ser feita por zero!\n");
                }
                break;
            case 5:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida, tente novamente!\n");
        }

    } while (opcao != 5);

    return 0;
}