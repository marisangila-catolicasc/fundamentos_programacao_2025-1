#include <stdio.h>

int main() {
float x, y, z;
    
    printf("Digite o comprimento do lado X: ");
scanf("%f", &x);    
    printf("Digite o comprimento do lado Y: ");
scanf("%f", &y);   
    printf("Digite o comprimento do lado Z: ");
scanf("%f", &z);
    
    if(x + y > z && x + z > y && y + z > x) {
        if(x == y && y == z) {
        printf("O triângulo é Equilátero!\n");
        }
        else if(x == y || x == z || y == z) {
        printf("O triângulo é Isóceles!\n");
        }
        else {
        printf("O triângulo é escaleno!\n");
        }
    }
    else {
        printf("Isso não é um triângulo.\n");
    }
    
    return 0;
}
// Compilador: gcc 7_BrunoSartortt.c -o 7_BrunoSartortt.exe
// Executador: .\7_BrunoSartortt.exe