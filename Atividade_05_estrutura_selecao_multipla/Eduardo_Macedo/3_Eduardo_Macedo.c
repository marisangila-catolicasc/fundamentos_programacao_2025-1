#include <stdio.h>

int main() {
    float valor1, valor2, resultado;
    char operador;

    printf("Informe o primeiro valor: ");
    scanf("%f", &valor1);

    printf("Informe o segundo valor: ");
    scanf("%f", &valor2);

    printf("Digite o operador desejado (+, -, *, /): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            resultado = valor1 + valor2;
            printf("Soma = %.2f\n", resultado);
            break;
        case '-':
            resultado = valor1 - valor2;
            printf("Subtração = %.2f\n", resultado);
            break;
        case '*':
            resultado = valor1 * valor2;
            printf("Multiplicação = %.2f\n", resultado);
            break;
        case '/':
            if (valor2 != 0) {
                resultado = valor1 / valor2;
                printf("Divisão = %.2f\n", resultado);
            } else {
                printf("ERRO: divisão por zero\n");
            }
            break;
        default:
            printf("ERRO: operador inválido\n");
    }

    return 0;
}
