#include <stdio.h>

int main() {
    float x, y, z;
    
    printf("Digite o primeiro lado: ");
    scanf("%f", &x);
    printf("Digite o segundo lado: ");
    scanf("%f", &y);
    printf("Digite o terceiro lado: ");
    scanf("%f", &z);
    
    if (x + y > z && x + z > y && y + z > x) {

        if (x == y && y == z) {
            printf("É um triângulo equilátero\n");
        } else if (x == y || y == z || x == z) {
            printf("É um triângulo isósceles\n");
        } else {
            printf("É um triângulo escaleno\n");
        }
    } else {
        printf("Estes valores não podem formar um triângulo\n");
    }
    
    return 0;
}
