#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("\nOs numeros sao: %d e %d\n", num1, num2);

    while (num1 != num2) {
        if (num1 < num2) {
            printf("%d ", num1);
            num1++;
        } else {
            printf("%d ", num1);
            num1--;
        }
    }

    printf("%d\n", num1);
    printf("agora os numeros sao: %d e %d\n", num1, num2);

    return 0;
}
