#include <stdio.h>

int main() {
    int list[15], i, result = 0;

    printf("escreva 15 numeros:\n");
    for (i = 0; i < 15; i++) {
        printf("elemento %d: ", i + 1);
        scanf("%d", &list[i]);
    }

    for (i = 1; i < 15; i += 2) {
        result += list[i];
    }

    printf("Resultado da soma dos elementos nas posições ímpares: %d\n", result);

    return 0;
}