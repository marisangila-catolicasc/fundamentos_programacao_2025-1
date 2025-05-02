#include <stdio.h>

int main()
{
    int n1;
    int n2;
    printf("Digite o primeiro número inteiro:\n");
    scanf("%d", &n1);
    printf("Digite o segundo número inteiro:\n");
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
    return 0;
}