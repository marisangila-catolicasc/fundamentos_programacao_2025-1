#include <stdio.h>

#include <math.h>

int main(){
    int a, b;
    int soma;
    int subtracao;
    int multiplicar;
    int divisao;
    int elevar;
    int resto;

    printf("Digite um numero:\n");
    scanf("%d", &a);
    printf("Digite mais um numero:\n");
    scanf("%d", &b);

    soma = a + b;
    subtracao = a - b;
    multiplicar = a * b;
    elevar = pow(a, b);
    resto = a % b;
    divisao = a / b;
    

    printf("A soma destes numeros eh: %d\n", soma);
    printf("A subtracao destes numeros eh: %d\n", subtracao);
    printf("A multiplicacao destes numeros eh: %d\n", multiplicar);
    printf("A divisao destes numeros eh: %d\n", divisao);
    printf("A potencia destes numeros eh: %d\n", elevar);
    printf("O resto destes numeros eh: %d\n", resto);

    return 0;
}