#include<stdio.h>

int main()
{
    int vetor1[10];
    int vetor2[10];
    int inversa = 10;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um valor: ");
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        inversa--;

        vetor2[i] = vetor1[inversa];
    }
    
    for (int i = 0; i < 10; i++)
    {
        printf("\n");
        printf("Vetor[%d] = %d \n", i, vetor1[i]);
        printf("Vetor inverso[%d] = %d \n", i, vetor2[i]);
    }
    
    return 0;
}
