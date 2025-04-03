#include <stdio.h>

void verificar_triangulo(int x, int y, int z) {
    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("O triangulo eh equilatero.\n");
        } else if (x == y || x == z || y == z) {
            printf("O triangulo eh isosceles.\n");
        } else {
            printf("O triangulo eh escaleno.\n");
        }
    } else {
        printf("Os valores informados nao formam um triangulo.\n");
    }
}

int main() {
    int x, y, z;

    printf("Digite o primeiro lado do triangulo: ");
    scanf("%d", &x);

    printf("Digite o segundo lado do triangulo: ");
    scanf("%d", &y);

    printf("Digite o terceiro lado do triangulo: ");
    scanf("%d", &z);

    verificar_triangulo(x, y, z);

    return 0;
}
