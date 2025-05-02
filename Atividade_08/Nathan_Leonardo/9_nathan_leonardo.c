#include <stdio.h>

int main() {
    int A[5], B[5], C[10];
    int i, j = 0;

    printf("Digite 5 numeros para o vetor A:\n");
    for (i = 0; i < 5; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    printf("\nDigite 5 numeros para o vetor B:\n");
    for (i = 0; i < 5; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    for (i = 0; i < 5; i++) {
        C[j++] = A[i];  
        C[j++] = B[i];  
    }

    printf("\nVetor C (intercalado):\n");
    for (i = 0; i < 10; i++) {
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
