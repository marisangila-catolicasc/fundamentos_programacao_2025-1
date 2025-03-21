#include <stdio.h>
int main() {

    int a, b;
    printf("Digite dois número inteiros:" );



    
    scanf("%d %d", &a, &b);

    printf("A soma dos valores é: %d", a + b);
    printf("\n");

    
    printf("A subtração será de: %d", a - b);
    printf("\n");

    
    printf("A multiplicação será de : %d", a * b);
    printf("\n");

    
    printf("A divisão dos valores será de : %d", a / b);
    printf("\n");

    
     printf("O primeiro número elevado ao segundo é: %d", a ^ b);
    printf("\n");

    
     printf("O resto da divisão do primeiro número pelo segundo será: %d", a % b);


    return 0;
}