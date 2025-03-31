#include <stdio.h>

int main() {
    float X, Y, Z;

    
    printf("Digite o comprimento do primeiro lado (X): ");
    scanf("%f", &X);

    printf("Digite o comprimento do segundo lado (Y): ");
    scanf("%f", &Y);

    printf("Digite o comprimento do terceiro lado (Z): ");
    scanf("%f", &Z);

    
    if (X + Y > Z && X + Z > Y && Y + Z > X) {
        
        if (X == Y && Y == Z) {
            printf("O triângulo é Equilátero.\n");
        } else if (X == Y || Y == Z || X == Z) {
            printf("O triângulo é Isósceles.\n");
        } else {
            printf("O triângulo é Escaleno.\n");
        }
    } else {
        
        printf("Os valores não podem formar um triângulo.\n");
    }

    return 0;
}
