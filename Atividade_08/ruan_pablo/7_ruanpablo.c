#include <stdio.h>

int main() {
    int v[10], inv[10];
    for (int i = 0; i < 10; i++) {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++) {
        inv[i] = v[9 - i];
        printf("%d ", inv[i]);
    }
    printf("\n");
    return 0;
}