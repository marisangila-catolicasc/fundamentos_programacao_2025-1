
#include <stdio.h>

int main() {
    int normal[10], invertido[10], i;

    printf("Entre com 10 números:\n");
    for (i = 0; i < 10; i++) {
        printf("Número %d: ", i + 1);
        scanf("%d", &normal[i]);
    }

    for (i = 0; i < 10; i++) {
        invertido[i] = normal[9 - i];
    }

    printf("Original: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", normal[i]);
    }

    printf("\nInvertido: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", invertido[i]);
    }

    printf("\n");

    return 0;
}
