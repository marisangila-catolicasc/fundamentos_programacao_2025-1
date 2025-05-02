#include <stdio.h>

int main() {
    int v[20], pares = 0;
    for (int i = 0; i < 20; i++) {
        scanf("%d", &v[i]);
        if (v[i] % 2 == 0) pares++;
    }
    printf("Pares: %d\n", pares);
    return 0;
}