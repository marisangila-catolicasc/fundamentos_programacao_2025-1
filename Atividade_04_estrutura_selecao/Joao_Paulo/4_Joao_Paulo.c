#include <stdio.h>

int main() {
    int a, b;

    printf("Numero 1:\n");
    scanf("%d", &a);
    printf("Numero 2:\n");
    scanf("%d", &b);

    if (a > b) {
        printf("Maior: %d\n", a);
    } else if (b > a) {
        printf("Maior: %d\n", b);
    } else {
        printf("Iguais\n");
    }

    return 0;
}
