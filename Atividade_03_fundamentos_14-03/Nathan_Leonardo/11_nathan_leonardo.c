#include <stdio.h>

int main(void){
    float celsius, f;

    printf("Informe a temperatura em Fahrenheit(°F), para conversão em Celsius(°C): \n");
    scanf("%f", &f);

    celsius = 5 * (f - 32) / 9;

    printf("%.2f °F equivalem a %.2f °C \n",f , celsius);

    return 0;
}