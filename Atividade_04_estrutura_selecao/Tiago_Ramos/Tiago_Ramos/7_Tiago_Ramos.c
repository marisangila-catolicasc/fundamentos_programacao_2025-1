#include <stdio.h>
int main() {
    int x, y, z;
    printf("Digite tres valores: ");
    scanf("%d %d %d", &x, &y, &z);
    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z)
            printf("Equilatero\n");
        else if (x == y || x == z || y == z)
            printf("Isosceles\n");
        else
            printf("Escaleno\n");
    } else {
        printf("Nao forma um triangulo\n");
    }
    return 0;
}