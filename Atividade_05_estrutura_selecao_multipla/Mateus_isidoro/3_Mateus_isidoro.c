#include <stdlib.h>
#include <stdio.h>
int main() {
    char operacao;
    float num1, num2, resultado;
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);
    printf("|codigo|operacao|\n");
    printf("|+|soma|\n");
    printf("|-|subtracao|\n");
    printf("|*|multiplicacao|\n");
    printf("|/|divisao|\n");
    scanf(" %c",&operacao);
    switch (operacao){
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f", resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f", resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f", resultado);
            break;
        case '/':
            if(num2 == 0){
                printf("Não é possível dividir por zero!");
            }else{
                resultado = num1 / num2;
                printf("Resultado: %.2f", resultado);
            }
            break;
        default:
            printf("Código inválido");
            break;
    }
    return 0;
}
