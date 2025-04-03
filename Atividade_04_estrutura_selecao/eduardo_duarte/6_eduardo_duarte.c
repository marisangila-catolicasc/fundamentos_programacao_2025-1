#include <stdio.h>

int main(){

    float num1, num2, num3;

    printf("Informe tres numeros: \n");
    scanf("%f %f %f", &num1, &num2, &num3);

    float maiorNum = num1;
    if(num2 > maiorNum) maiorNum = num2;
    if(num3 > maiorNum) maiorNum = num3;

    printf("O maior numeros eh %.2f!", maiorNum);
}