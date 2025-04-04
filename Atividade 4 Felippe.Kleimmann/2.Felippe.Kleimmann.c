#include <stdio.h>
int main() {
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("Seu número é par!\n");
    } else {
        printf("Seu número é ímpar!\n");
    }

    return 0;
}
