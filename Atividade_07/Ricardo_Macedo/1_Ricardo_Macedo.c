#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);

    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("\n");

    while (num1 != num2) {
        if (num1 < num2) {
            num1++;
        } else if (num1 > num2) {
            num1--;
        }
    }

    printf("Resultado numero 1: %d, numero 2: %d!", num1, num2);

    return 0;
}