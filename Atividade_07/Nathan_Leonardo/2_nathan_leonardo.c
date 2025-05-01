#include <stdio.h>

int main() {
    int opcao;
    float a, b;

    do {
        printf("1 - Somar\n");
        printf("2 - Subtrair\n");
        printf("3 - Multiplicar\n");
        printf("4 - Dividir\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%f %f", &a, &b);
        }

        switch(opcao) {
            case 1:
                printf("Resultado: %.2f\n", a + b);
                break;
            case 2:
                printf("Resultado: %.2f\n", a - b);
                break;
            case 3:
                printf("Resultado: %.2f\n", a * b);
                break;
            case 4:
                if (b == 0)
                    printf("Erro: divisao por zero!\n");
                else
                    printf("Resultado: %.2f\n", a / b);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}
