#include <stdio.h>

int main(){
    float celsius;
    float fahrenheit;

    printf("Digite a temperatura em Fahrenheit (F):\n");
    scanf("%f", &fahrenheit);

    celsius = (5*(fahrenheit-32))/9;

    printf("%.2f F equivalem a temperatura de %.2f C.", fahrenheit, celsius);

    return 0;
}