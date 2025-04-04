#include <stdio.h>
int main() {
    int num1, num2;
    float resultado;
    char operacao;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao){
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
            if (num2 != 0){
                resultado = num1 / num2;
                printf("Resultado: %f\n", resultado);
            } else{
                printf("Erro: Divisao por zero\n");
            }
            break;
    }
    return 0;
}