#include <stdio.h>

int main() {
    int opc, num1, num2;
    do {
        printf("1- somar\n");
        printf("2- subtrair\n");
        printf("3- multiplicar\n");
        printf("4- dividir\n");
        printf("5- sair\n");
        scanf("%d", &opc);
        switch (opc) {
            case 1:
                num1 = 0;
                num2 = 0;
                printf("Digite o primeiro número:\n");
                scanf("%d", &num1);
                printf("Digite o segundo número:\n");
                scanf("%d", &num2);
                printf("A soma é: %d\n", num1 + num2);
                break;
            case 2:
                num1 = 0;
                num2 = 0;
                printf("Digite o primeiro número:\n");
                scanf("%d", &num1);
                printf("Digite o segundo número:\n");
                scanf("%d", &num2);
                printf("A subtração é: %d\n", num1 - num2);
                break;
            case 3:
                num1 = 0;
                num2 = 0;
                printf("Digite o primeiro número:\n");
                scanf("%d", &num1);
                printf("Digite o segundo número:\n");
                scanf("%d", &num2);
                printf("A multiplicação é: %d\n", num1 * num2);
                break;
            case 4:
                num1 = 0;
                num2 = 0;
                printf("Digite o primeiro número:\n");
                scanf("%d", &num1);
                printf("Digite o segundo número:\n");
                scanf("%d", &num2);
                printf("A divisão é: %d\n", num1 / num2);
                break;
            case 5:
                printf("sair\n");
                break;
        }
    } while (opc != 5);
    printf("Fim do programa\n");
    return 0;
}