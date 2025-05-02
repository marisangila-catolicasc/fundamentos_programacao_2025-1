#include <stdio.h>

int main() {
    int opcao, a, b;
    do {
        printf("1 - somar\n2 - subtrair\n3 - multiplicar\n4 - dividir\n5 - sair\n");
        scanf("%d", &opcao);
        if (opcao >= 1 && opcao <= 4) {
            printf("Digite dois numeros: ");
            scanf("%d %d", &a, &b);
        }
        switch (opcao) {
            case 1:
                printf("Resultado: %d\n", a + b);
                break;
            case 2:
                printf("Resultado: %d\n", a - b);
                break;
            case 3:
                printf("Resultado: %d\n", a * b);
                break;
            case 4:
                if (b != 0)
                    printf("Resultado: %.2f\n", (float)a / b);
                else
                    printf("Divisao por zero!\n");
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida.\n");
        }
    } while (opcao != 5);
    return 0;
}
