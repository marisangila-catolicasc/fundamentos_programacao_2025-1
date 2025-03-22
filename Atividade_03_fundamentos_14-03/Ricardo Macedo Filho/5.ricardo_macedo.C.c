#include <stdio.h>

int main() {
    int a, b, resultado;
    
    printf("digite um numero: ");
    scanf("%d",&a);
    
    printf("digite outro numero: ");
    scanf("%d",&b);

    resultado = a + b;

    printf("o resultado da soma é: %d", resultado);
    
    return 0;
}
