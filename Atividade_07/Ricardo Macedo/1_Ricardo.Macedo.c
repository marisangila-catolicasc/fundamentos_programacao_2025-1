#include <stdio.h>

int main() {
    int num1, num2;
    printf("digite o primeiro número:\n");
    scanf("%d", &num1);
    printf("digite o segundo número:\n");
    scanf("%d", &num2);
    while (num1 < num2) {
        num1 += 1;
    }
    while (num1 > num2) {
        num1 -= 1;
    }
    printf("número 1: %d\n", num1);
    printf("número 2: %d\n", num2);
    return 0;
}