#include <stdio.h>
int main() {
    
    int a, b;
    printf("Me informe dois valores inteiros:" );
 
    scanf("%d %d", &a, &b);
    
    printf("A soma dos valores é: %d", a + b);
    printf("\n");
    printf("A subtração dos valores é: %d", a - b);
    printf("\n");
    printf("A multiplicação dos valores é: %d", a * b);
    printf("\n");
    printf("A divisão dos valores é: %d", a / b);
    printf("\n");
     printf("O primeiro número elevado ao segundo é: %d", a ^ b);
    printf("\n");
     printf("O resto da divisão do primeiro número pelo segundo é: %d", a % b);
  

    return 0;
}