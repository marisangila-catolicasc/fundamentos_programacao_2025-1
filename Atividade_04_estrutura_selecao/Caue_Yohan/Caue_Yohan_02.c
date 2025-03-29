#include <stdio.h>

int main(int argc, char const *argv[])
{

    int n1;
    printf("Digite um numero:\n");
    scanf("%d", &n1);

    if (n1%2==0)
    {
     printf("O numero digitado e par\n");

    }
    else
    {
        printf("O numero digitado e impar");
    }    

    return 0;
}
