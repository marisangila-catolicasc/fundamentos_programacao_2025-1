#include <stdio.h>

int main() {
    float fahreinheit, celsius;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &fahreinheit);

    celsius = (fahreinheit - 32) * 5 / 9;

    printf("%.2f°F equivalem a %.2f°C\n", fahreinheit, celsius);

    return 0;
}
