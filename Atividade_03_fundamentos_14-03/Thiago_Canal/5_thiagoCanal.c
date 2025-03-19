#include <stdio.h>

void soma(int n, int m);

int main(void){
    int n1, n2;

    printf("Digite um numero: ");
    scanf("%d", &n1);
    printf("Digite outro numero: ");
    scanf("%d", &n2);
    soma(n1, n2);
}

void soma(int n, int m){
    int soma = n + m;

    printf("A soma de %d com %d e %d", n, m, soma);
}