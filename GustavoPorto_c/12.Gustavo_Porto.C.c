#include <stdio.h>
#include <math.h>  

int main() {
    int num1, num2;
    int soma, subtracao, multiplicacao, resto;
    float divisao, potencia;

    printf("digite o primeiro numero inteiro: ");
    scanf("%d", &num1);

    printf("digite o segundo numero inteiro: ");
    scanf("%d", &num2);

    soma = num1 + num2;
    subtracao = num1 - num2;
    multiplicacao = num1 * num2;
    divisao = (float)num1 / num2;  
    potencia = pow(num1, num2);  
    resto = num1 % num2;

    printf("\nresultados das operacoes:\n");
    printf("soma: %d\n", soma);
    printf("subtracao: %d\n", subtracao);
    printf("multiplicacao: %d\n", multiplicacao);
    printf("divisao: %.2f\n", divisao);
    printf("exponenciacao: %.2f\n", potencia);
    printf("rresto da divisao: %d\n", resto);

    return 0;
}
