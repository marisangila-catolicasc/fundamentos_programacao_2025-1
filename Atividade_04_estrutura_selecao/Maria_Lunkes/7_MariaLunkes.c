#include <stdio.h>

int main() {
    int x, y, z;

    printf("Digite o valor de x: ");
    scanf("%d", &x);

    printf("Digite o valor de y: ");
    scanf("%d", &y);
    
    printf("Digite o valor de z: ");
    scanf("%d", &z);
    
    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Triângulo Equilátero.\n");
        } else if (x == y || x == z || y == z) {
            printf("Triângulo Isósceles.\n");
        } else {
            printf("Triângulo Escaleno.\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }

    return 0;
}