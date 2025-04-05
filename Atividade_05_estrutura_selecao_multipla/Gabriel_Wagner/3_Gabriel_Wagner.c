#include <stdio.h>
int main() {
    float num1, num2, resultado;
    char operador;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("\n");
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);
    printf("\n");
    printf("qual a operaçao que vc quer?   ex:(+, -, * ou /):  ");
    printf("\n");
    scanf(" %c", &operador);

    if (num1 == 0 && num2 == 0)
    {
            printf ("algum nuro invalido, nao pode ser 0");
    } else{
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f\n", resultado);
            break;
        case '/':
                resultado = num1 / num2;
                printf("Resultado: %.2f\n", resultado);
            break;
        default:
            printf("Operação inválida!\n");
    }
    }
    return 0;
}