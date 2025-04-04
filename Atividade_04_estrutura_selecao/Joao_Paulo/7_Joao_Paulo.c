#include <stdio.h>

int main() {
    int x, y, z;

    printf("Lado 1:\n");
    scanf("%d", &x);
    printf("Lado 2:\n");
    scanf("%d", &y);
    printf("Lado 3:\n");
    scanf("%d", &z);

    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Equilatero\n");
        } else if (x == y || x == z || y == z) {
            printf("Isosceles\n");
        } else {
            printf("Escaleno\n");
        }
    } else {
        printf("Nao forma triangulo\n");
    }

    return 0;
}
