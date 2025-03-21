#include <stdio.h>
int main() {

float celsius, fahrenheit;
    
    
    
    printf("Digite a temperatura em Fahrenheit:" );
    scanf("%f", &fahrenheit);



    
 celsius = (fahrenheit - 32) * 5 / 9;
    printf("Em Celsius a temperatura será de: %.2f\n", celsius);

    return 0;
}