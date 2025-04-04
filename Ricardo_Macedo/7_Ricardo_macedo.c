#include <stdio.h>
int main() {
    int x, y, z;
    printf("Digite o comprimento do lado x: ");
    scanf("%d", &x);
    printf("Digite o comprimento do lado y: ");
    scanf("%d", &y);
    printf("Digite o comprimento do lado z: ");
    scanf("%d", &z);

    if (x < y + z && y < x + z && z < x + y) {
        if (x == y && y == z) {
            printf("Seu triângulo é equilatero!\n");
        } else if (x == y || x == z || y == z) {
            printf("Seu triângulo é isosceles!\n");
        } else {
            printf("Seu triângulo é escaleno!\n");
        }
    } else {
        printf("Essas medidas não formam um triângulo\n");
    }

    return 0;
}