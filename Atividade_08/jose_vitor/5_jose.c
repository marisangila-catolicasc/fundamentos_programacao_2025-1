#include<stdio.h>

int main()
{
    
    int A[5];
    int B[5];
    int C[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero para o vetor A: ");
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um numero para o vetor B: ");
        scanf("%d", &B[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        C[i] = A[i] + B[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("\nA[%d] + B[%d] = %d\n", i, i, C[i]);
    }

    return 0;
}
