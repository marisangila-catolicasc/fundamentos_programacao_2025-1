#include <stdio.h>
int main() {
    int A[5], B[5], C[10], i, j = 0;

    for (i = 0; i < 5; i++) {
        printf("vetor a %d: ", i);
        scanf("%d", &A[i]);
    }

    for (i = 0; i < 5; i++) {
        printf("vetor b %d: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        C[j++] = A[i];
        C[j++] = B[i];
    }

    printf("vetor c:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }

    printf("\n");
    return 0;
}
