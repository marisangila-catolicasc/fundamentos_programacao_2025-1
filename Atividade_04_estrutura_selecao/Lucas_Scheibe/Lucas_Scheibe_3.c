#include <stdio.h>

int main() {
    float a;
    
    printf("Quantas macas voce comprou?:\n");
    scanf("%f", &a);
    
    if (a <= 12) {
        printf("O total a se pagar vai ser %.2f reais!\n", a * 2.3);
    } 
    else {
        printf("O total a se pagar vai ser %.2f reais!\n", a * 1.95);
    }
}