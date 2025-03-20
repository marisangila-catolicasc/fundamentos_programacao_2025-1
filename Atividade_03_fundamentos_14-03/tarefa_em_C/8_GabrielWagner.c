#include <stdio.h>

#define PI 3.1415

int main() {
    float raio, altura, volume;
    
    printf("Raio da lata?\n");
    scanf("%f", &raio);
    
    printf("Altura da lata?\n");
    scanf("%f", &altura);
    
    volume = PI * raio * raio * altura;
    
    printf("Volume eh ");
    printf("%.2f", volume);
    printf("\n");

    return 0;
}
