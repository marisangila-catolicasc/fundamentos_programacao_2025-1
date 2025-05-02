#include <stdio.h>

int main() {
    int a[5], b[5], c[10], i, d = 0;

    printf("escreva o veto a:\n");
    for (i = 0; i < 5; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("escreva o veto b:\n");
    for (i = 0; i < 5; i++) {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 5; i++) {
        c[d++] = a[i];
        c[d++] = b[i];
    }

    printf("veto c intercalado:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", c[i]);
    }

    return 0;
}