#include <stdio.h>

int main() {
    int lenVetor = 5;
    int A[lenVetor], B[lenVetor], C[lenVetor], i;

    for (i = 0; i < 5; i++){
        printf("Digite o valor de A[%d]: ", i);
        scanf("%d", &A[i]);
        printf("Digite o valor de B[%d]: ", i);
        scanf("%d", &B[i]);
        C[i] = A[i] + B[i];
        printf("A soma de A[%d] + B[%d] = %d\n", i, i, C[i]);
        printf("\n");
    }
    printf("Vetor C: ");
    for (i = 0; i < 5; i++){
        printf("%d, ", C[i]);
    }
    
    return 0; 
}

