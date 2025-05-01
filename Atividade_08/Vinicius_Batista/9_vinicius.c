#include <stdio.h>

int main()
{
    int A[5], B[5], C[10];

    for (int i = 0; i < 5; i++)
    {
        printf("Digite um valor pro vetor A na posicao %d\n", i + 1);
        scanf("%d", &A[i]);
    }for (int i = 0; i < 5; i++)
    {
        printf("\nDigite um valor pro vetor B na posicao %d\n", i + 1);
        scanf("%d", &B[i]);
    }
    for (int i = 0, j = 0; i < 5; i++)
    {
        C[j++] = A[i];
        C[j++] = B[i];
    }
    printf("\nExibicao no vetor C: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d  ", C[i]);
    }
    
    return 0;
}
