#include <stdio.h>

int main() {
    float x, y, z;

    printf("Digite os três lados do triângulo: ");
    scanf("%f %f %f", &x, &y, &z);

    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z)
            printf("Triângulo Equilátero.\n");
        else if (x == y || x == z || y == z)
            printf("Triângulo Isósceles.\n");
        else
            printf("Triângulo Escaleno.\n");
    } else {
        printf("Os valores não formam um triângulo.\n");
    }

    return 0;
}
