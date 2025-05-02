#include<stdio.h>

int main()
{
    int vetor1[5];
    int vetor2[5];
    int vetor3[10];

    for (int i = 0; i < 5; i++)
    {
        printf("Valor vetor1[%d]: ", i);
        scanf("%d", &vetor1[i]);
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("Valor vetor2[%d]: ", i);
        scanf("%d", &vetor2[i]);
    }

    int par = 0;
    int impar = 0;  

    for (int i = 0; i < 10; i++)
    {
       if (i == 0 || i % 2 == 0)
       {
            vetor3[i] = vetor1[par];
            par++;
       } else if (i % 2 != 0)
       {
            vetor3[i] = vetor2[impar];
            impar++;
       }
       
       printf("vetor3[%d] = %d\n", i, vetor3[i]);
    
    }
    
    return 0;
}
