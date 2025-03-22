#include <stdio.h>

int main() {
    int x, y;

    printf("Informe dois valores:\n");
    scanf("%d %d", &x, &y);

    printf("Os valores escolhidos foram: %d e %d\n", x, y);
    printf("A troca dos valores é: %d %d\n", y, x);

    return 0;
}