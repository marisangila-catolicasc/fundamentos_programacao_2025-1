#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    printf("Forneça uma temperatura em graus Fahrenheit:\n");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("%f F equivalem a %f C\n", fahrenheit, celsius);

    return 0;
}