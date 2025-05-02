#include <stdio.h>

int main()
{
    int A[5], B[5], C[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero inteiro pro vetor A:\n");
        scanf("%d", &A[i]);
    }for (int i = 0; i < 5; i++)
    {
        printf("\nDigite um numero inteiro pro vetor B:\n");
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        C[i] = A[i] + B[i];
    }
        printf("\nA soma de todos os vetores A e B:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", C[i]);
    }
    
    return 0;
}