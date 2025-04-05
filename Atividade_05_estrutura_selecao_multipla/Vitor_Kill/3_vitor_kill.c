#include <stdio.h>

int main() {
    float num1, num2;
    char operation;

    printf("Digite um primeiro numero: ");
    scanf("%f", &num1);

    printf("Digite outro numero: ");
    scanf("%f", &num2);

    printf("Digite a operacao desejada [+], [-], [/], [*]): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if(num2 != 0) {
                printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);
            } else {
                printf(" Divisao por zero nao permitida\n");
            }
            break;
        default:
            printf("Erro!\n");
    }

    return 0;