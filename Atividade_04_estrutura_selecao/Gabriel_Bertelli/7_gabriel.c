#include <stdio.h>

int main(int argc, char const *argv[]) {
    
    int x;
    int y;
    int z;

    
    printf("Digite os três valores dos lados do triângulo: ");
    scanf("%d %d %d", &x, &y, &z);
    
    
    if (x + y > z && x + z > y && y + z > x) {
        if (x == y && y == z) {
            printf("Os valores formam um triângulo equilátero.\n");
        } else if (x == y || x == z || y == z) {
            printf("Os valores formam um triângulo isósceles.\n");
        } else {
            printf("Os valores formam um triângulo escaleno.\n");
        }
    } else {
        printf("Os valores não formam um triângulo.\n");
    }
    
    return 0;
}