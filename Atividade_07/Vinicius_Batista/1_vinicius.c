#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Digite um numero inteiro:\n");
    scanf("%d", &n1);
    printf("Digite mais um numero inteiro:\n");
    scanf("%d", &n2);
    while (n1 != n2)
    {
        if (n1>n2)
        {
           n1--;
        }else if (n1<n2)
        {
            n1++;
        }
        }
        printf("Igualado para %d e %d", n1 ,n2);
    return 0;
}
