#include <stdio.h>

int main() {
    float num;
    printf("Digite um número: ");
    scanf("%f", &num);

    if (num > 0)
        printf("O número é positivo.\n");
    else if (num < 0)
        printf("O número é negativo.\n");
    else
        printf("O número é zero.\n");

    return 0;
}
