#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("digite a temperatura em Fahrenheit (°F): ");
    scanf("%f", &fahrenheit);

    celsius = (5.0 / 9.0) * (fahrenheit - 32);

    printf("%.2f°F equivalem a %.2f°C.\n", fahrenheit, celsius);

    return 0;
}
