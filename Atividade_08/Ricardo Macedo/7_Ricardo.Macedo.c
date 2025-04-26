#include <stdio.h>

int main() {
    int A[10], B[10], i;

    printf("digite 10 números:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &A[i]);
    }

    for(i = 0; i < 10; i++) {
        B[i] = A[9 - i];
    }

    printf("vetor B (ordem inversa):\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", B[i]);
    }

    return 0;
}
