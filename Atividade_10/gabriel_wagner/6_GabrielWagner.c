#include <stdio.h>

int main() {
    int x, y, z;

    printf("Numero 1:\n");
    scanf("%d", &x);
    printf("Numero 2:\n");
    scanf("%d", &y);
    printf("Numero 3:\n");
    scanf("%d", &z);

    if (x >= y && x >= z) {
        printf("Maior: %d\n", x);
    } else if (y >= x && y >= z) {
        printf("Maior: %d\n", y);
    } else {
        printf("Maior: %d\n", z);
    }

    return 0;
}
