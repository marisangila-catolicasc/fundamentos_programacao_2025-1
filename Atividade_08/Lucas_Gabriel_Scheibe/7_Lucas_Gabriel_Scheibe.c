#include <stdio.h>

int main() {
    int default[10], reverso[10], i;

    printf("digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("numero %d: ", i + 1);
        scanf("%d", &default[i]);
    }

    for (i = 0; i < 10; i++) {
        reverso[i] = default[9 - i];
    }

    printf("original: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", default[i]);
    }

    printf("\ninvertido: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", reverso[i]);
    }

    printf("\n");

    return 0;
}