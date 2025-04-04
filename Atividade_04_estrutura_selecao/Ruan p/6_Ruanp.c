#include <stdio.h>

int main() {
    int x, y, z;

    printf("Informe o valor de um lado: ");
    scanf("%d", &x);

    printf("Informe o valor de um lado: ");
    scanf("%d", &y);

    printf("Informe o valor de um lado: ");
    scanf("%d", &z);

    if (x == y && y == z) {
        printf("O triângulo é equilátero!\n");
    } else if (x == y || y == z || z == x) {
        printf("O triângulo é isósceles!\n");
    } else {
        printf("O triângulo é escaleno!\n");
    }

    return 0;
}
