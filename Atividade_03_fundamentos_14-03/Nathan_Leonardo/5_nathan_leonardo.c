#include <stdio.h>

int main(void){
    int n1, n2, soma;

    printf("Digite um numero: \n");
    scanf("%d", &n1);

    printf("Digite outro numero: \n");
    scanf("%d", &n2);

    soma = n1 + n2;

    printf("A soma dos numeros digitados sera: %d \n",soma);

    return 0;
}