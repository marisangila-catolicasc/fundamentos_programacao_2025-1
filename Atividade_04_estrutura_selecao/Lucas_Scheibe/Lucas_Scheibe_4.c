#include <stdio.h>

int main() {
    float a, b;
    
    printf("Digite um numero:\n");
    scanf("%f", &a);

    printf("Digite outro numero:\n");
    scanf("%f", &b);
    
    if (a > b) {
        printf("O numero %.2f e maior\n", &a);
    } 
    else if (a == b) {
        printf("Os numeros sao iguais\n");
    }
    else {
        printf("O numero %.2f e maior\n", &b);
    }
}
