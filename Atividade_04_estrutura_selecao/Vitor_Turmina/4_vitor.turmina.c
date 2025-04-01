#include <stdio.h>

int main(){

    float num1, num2;

    printf("Informe dois numeros:\n");
    scanf("%f %f", &num1, &num2);

    if(num1 == num2){
        printf("Os numeros sao iguais");
    }
    else if(num1 > num2){
        printf("O primeiro numero eh o maior");
    }
    else{
        printf("O segundo numero eh o maior");
    }
    
}