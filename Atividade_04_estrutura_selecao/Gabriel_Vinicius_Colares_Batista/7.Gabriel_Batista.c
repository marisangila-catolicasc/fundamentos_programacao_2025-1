
#include <stdio.h>

int main() {
    float x, y, z;
    
    printf("Digite o primeiro lado (X): ");
    scanf("%f", &x);
    
    printf("Digite o segundo lado (Y): ");
    scanf("%f", &y);
    
    printf("Digite o terceiro lado (Z): ");
    scanf("%f", &z);
    
    // Verifica se pode formar um triângulo
    if (x + y > z && y + z > x && x + z > y) {
        // É um triângulo, vamos verificar o tipo
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
