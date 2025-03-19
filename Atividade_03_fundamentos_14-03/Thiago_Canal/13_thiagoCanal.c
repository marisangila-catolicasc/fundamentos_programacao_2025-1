#include <stdio.h>

int main(void){
    float v1, v2, temp;

    printf("Numero 1: ");
    scanf("%f", &v1);
    printf("Numero 2: ");
    scanf("%f", &v2);
    printf("Numero 1: %.2f\nNumero 2: %.2f\n", v1, v2);

    temp = v1;
    v1 = v2;
    v2 = temp;
    printf("Numero 1: %.2f\nNumero 2: %.2f", v1, v2);
    
}