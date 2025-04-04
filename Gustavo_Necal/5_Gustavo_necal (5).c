#include <stdio.h>

int main() {
    float a, b, c, maior;

    printf("Digite três números: ");
    scanf("%f %f %f", &a, &b, &c);

    maior = a;
    if (b > maior)
        maior = b;
    if (c > maior)
        maior = c;

    printf("O maior número é %.2f\n", maior);

    return 0;
}
