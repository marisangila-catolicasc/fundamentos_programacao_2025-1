#include <stdio.h>

int main() {
    int escolha;
    float a, b, res;

    while (1) {
        
    printf("\nMenu:\n");
    printf("1 - Adição\n");
    printf("2 - Subtração\n");
    printf("3 - Multiplicação\n");
    printf("4 - Divisão\n");
    printf("0 - Encerrar\n");
    printf("Opção: ");
    scanf("%d", &escolha);

        if (escolha == 0) {
        printf("Finalizando programa.\n");
        break;
        }

        if (escolha >= 1 && escolha <= 4) {
        printf("Informe dois valores: ");
        scanf("%f %f", &a, &b);

            switch (escolha) {
                case 1:
                    res = a + b;
                    printf("Soma = %.2f\n", res);
                    break;
                case 2:
                    res = a - b;
                    printf("Subtração = %.2f\n", res);
                    break;
                case 3:
                    res = a * b;
                    printf("Multiplicação = %.2f\n", res);
                    break;
                case 4:
                    if (b != 0) {
                        res = a / b;
                        printf("Divisão = %.2f\n", res);
                    } else {
                        printf("Não é possível dividir por zero.\n");
                    }
                    break;
            }
        } else {
            printf("Opcão inválida.\n");
        }
    }

    return 0;
}
