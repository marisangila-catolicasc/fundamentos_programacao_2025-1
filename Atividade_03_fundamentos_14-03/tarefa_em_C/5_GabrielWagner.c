#include <stdio.h>

int main() {
    int num1, num2, soma;
    
    printf("Primeiro numero?? ");
    scanf("%d", &num1);
    
    printf("Segundo numero?? ");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    
    printf("A soma eh ");
    printf("%d", soma);
    printf("\n");

    return 0;
}
