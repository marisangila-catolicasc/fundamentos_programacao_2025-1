#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Fahrenheit?\n");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("%.2f", fahrenheit);
    printf("F eh ");
    printf("%.2f", celsius);
    printf("C\n");

    return 0;
}
