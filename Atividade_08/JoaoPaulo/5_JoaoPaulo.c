#include <stdio.h>

int main() {
    int a[5], b[5], c[5], i;

    printf("Insira os valores do veto a:\n");
    for (i = 0; i < 5; i++) {
        printf("a[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Agora, insira os valores do veto b:\n");
    for (i = 0; i < 5; i++) {
        printf("b[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 5; i++) {
        c[i] = a[i] + b[i];
    }

    printf("Resultado no veto c:\n");
    for (i = 0; i < 5; i++) {
        printf("c[%d] = %d\n", i, c[i]);
    }

    return 0;
}