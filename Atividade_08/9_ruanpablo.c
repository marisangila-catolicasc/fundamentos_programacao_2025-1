#include <stdio.h>

int main() {
    int a[5], b[5], c[10], j = 0;
    for (int i = 0; i < 5; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 5; i++) scanf("%d", &b[i]);
    for (int i = 0; i < 5; i++) {
        c[j++] = a[i];
        c[j++] = b[i];
    }
    for (int i = 0; i < 10; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}