#include <stdio.h>

int main() {
    float num1, num2;
    char operacao;

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    printf("Escolha uma operacao (+, -, * ou /): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            printf("Resultado: %.2f\n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %.2f\n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %.2f\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Resultado: %.2f\n", num1 / num2);
            else
                printf("Erro: divisao por zero!\n");
            break;
        default:
            printf("Operacao invalida!\n");
    }

    return 0;
}